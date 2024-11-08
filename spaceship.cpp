#include "spaceship.hpp"
#include "spaceship_texture.h"
#include <raylib.h>
#include "lasersound.h"

Image spaceship_image_memory {
    .data = SPACESHIP_TEXTURE_DATA,
    .width = SPACESHIP_TEXTURE_WIDTH,
    .height = SPACESHIP_TEXTURE_HEIGHT,
    .mipmaps = 1,
    .format = SPACESHIP_TEXTURE_FORMAT
};

Wave laserh {
    .frameCount = LASERSOUND_FRAME_COUNT,
    .sampleRate = LASERSOUND_SAMPLE_RATE,
    .sampleSize = LASERSOUND_SAMPLE_SIZE,
    .channels = LASERSOUND_CHANNELS,
    .data = LASERSOUND_DATA,
};

Spaceship::Spaceship()
{
    last_fire_time = 0.f;
    speed = 6.f;
    image = LoadTextureFromImage(spaceship_image_memory);
    laser_sound = LoadSoundFromWave(laserh);
    SetSoundVolume(laser_sound, 0.1f);
    position.x = (GetScreenWidth() - image.width) / 2.f;
    position.y = GetScreenHeight() - image.height - 100;
}

Spaceship::~Spaceship() 
{
    UnloadTexture(image);    
    UnloadSound(laser_sound);
}

void Spaceship::Draw()
{
    DrawTextureV(image, position, WHITE);
}

void Spaceship::MoveLeft()
{
    position.x -= speed;    
    if (position.x < 25)
        position.x = 25;
}

void Spaceship::MoveRight()
{
    position.x += speed;
    if (position.x > GetScreenWidth() - image.width - 25)
        position.x = GetScreenWidth()- image.width - 25;
}

void Spaceship::FireLaser()
{
    if (GetTime() - last_fire_time >= .35f) {
        lasers.push_back(Laser({position.x + image.width/2.f - 2.f, 
                                position.y},
                                -6.f)); 
        last_fire_time = GetTime();
        PlaySound(laser_sound);
    }
}
 
Rectangle Spaceship::GetRect()
{
    return {position.x, position.y, float(image.width), float(image.height)};
}
 
void Spaceship::Reset()  
{
    position.x = (GetScreenWidth() - image.width) / 2.f;
    position.y = GetScreenHeight() - image.height - 100;
    lasers.clear();
}
 
Image Spaceship::GetSpaceShipImage()
{
	return spaceship_image_memory;
}
