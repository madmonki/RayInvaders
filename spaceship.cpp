#include "spaceship.hpp"
#include <raylib.h>

Spaceship::Spaceship()
{
    last_fire_time = 0.f;
    speed = 6.f;
    image = LoadTexture("Graphics/spaceship.png");
    position.x = (GetScreenWidth() - image.width) / 2.f;
    position.y = GetScreenHeight() - image.height;
}

Spaceship::~Spaceship() 
{
    UnloadTexture(image);    
}

void Spaceship::Draw()
{
    DrawTextureV(image, position, WHITE);
}

void Spaceship::MoveLeft()
{
    position.x -= speed;    
    if (position.x < 0)
        position.x = 0;
}

void Spaceship::MoveRight()
{
    position.x += speed;
    if (position.x > GetScreenWidth() - image.width)
        position.x = GetScreenWidth()- image.width;
}

void Spaceship::FireLaser()
{
    if (GetTime() - last_fire_time >= .35f) {
        lasers.push_back(Laser({position.x + image.width/2.f - 2.f, 
                                position.y},
                                -6.f)); 
        last_fire_time = GetTime();
    }
}
