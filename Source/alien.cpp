#include "alien.hpp"
#include "alien1_texture.h"
#include "alien2_texture.h"
#include "alien3_texture.h"
#include <raylib.h>

Texture2D Alien::alien_images[3] = {};

Image alien1 {
        .data = ALIEN1_TEXTURE_DATA,
        .width = ALIEN1_TEXTURE_WIDTH,
        .height = ALIEN1_TEXTURE_HEIGHT,
        .mipmaps = 1,
        .format = ALIEN1_TEXTURE_FORMAT
    };
Image alien2 {
        .data = ALIEN2_TEXTURE_DATA,
        .width = ALIEN2_TEXTURE_WIDTH,
        .height = ALIEN2_TEXTURE_HEIGHT,
        .mipmaps = 1,
        .format = ALIEN2_TEXTURE_FORMAT
    };
Image alien3 {
        .data = ALIEN3_TEXTURE_DATA,
        .width = ALIEN3_TEXTURE_WIDTH,
        .height = ALIEN3_TEXTURE_HEIGHT,
        .mipmaps = 1,
        .format = ALIEN3_TEXTURE_FORMAT
    };

Alien::Alien(int type, Vector2 position)  
{
    this -> type = type;
    this -> position = position;
    
    if (alien_images[type - 1].id == 0)

        switch(type) {
            case 1:
                alien_images[0] = LoadTextureFromImage(alien1);
                break;
            case 2:
                alien_images[1] = LoadTextureFromImage(alien2);
                break;
            case 3:
                alien_images[2] = LoadTextureFromImage(alien3);
                break;
            default:
                alien_images[0] = LoadTextureFromImage(alien1);
                break;
        }
}

void Alien::Draw()
{
    DrawTextureV(alien_images[type - 1], position, WHITE);
}

int Alien::GetType()
{
    return type;
}

 
void Alien::UnloadImages()
{
    for (int i = 0; i < 4; i++)
        UnloadTexture(alien_images[i]);
}

void Alien::Update(int direction)
{
    position.x += direction;
}

 
Rectangle Alien::GetRect() 
{
    return {position.x, position.y, float(alien_images[type - 1].width),
                                    float(alien_images[type - 1].height)};
}
 
