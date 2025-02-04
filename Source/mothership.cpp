#include "mothership.hpp"
#include "mothership_texture.h"
#include <raylib.h>
 
Image mothership_memory {
    .data = MOTHERSHIP_TEXTURE_DATA,
    .width = MOTHERSHIP_TEXTURE_WIDTH,
    .height = MOTHERSHIP_TEXTURE_HEIGHT,
    .mipmaps = 1,
    .format = MOTHERSHIP_TEXTURE_FORMAT
};

MotherShip::MotherShip() 
{
    image = LoadTextureFromImage(mothership_memory); 
    alive = false;
}
 
MotherShip::~MotherShip() 
{
    UnloadTexture(image); 
}

void MotherShip::Spawn()
{
    position.y = 90;
    int side = GetRandomValue(0, 1);

    if (side == 0) {
        position.x = 25;
        speed = 3;
    }
    else {
        position.x = GetScreenWidth() - image.width - 25;
        speed = -3;
    }
    alive = true;
}

 
void MotherShip::Update()  
{
    if (alive) {
        position.x += speed;
        if (position.x > GetScreenWidth() - image.width - 25 || position.x < 25)
            alive = false;
    }
}

void MotherShip::Draw()
{
    if (alive)
        DrawTextureV(image, position, WHITE);
}
 
Rectangle MotherShip::GetRect()
{
    if (alive)
        return {position.x, position.y, float(image.width), 
                                        float(image.height) };
    else 
        return {position.x, position.y, 0, 0};
}
