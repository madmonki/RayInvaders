#include "laser.hpp"
#include <raylib.h>

Laser::Laser(Vector2 position, float speed)
{
    this -> position = position;
    this -> speed = speed;
    active = true;
}

void Laser::Draw()
{
    if (active)
        DrawRectangle(position.x, position.y, 4, 15, {243, 216, 63, 255});
}

void Laser::Update()
{
    position.y += speed;
    if (active) {
        if (position.y > GetScreenHeight() || position.y < 0)
            active = false;
    }
}

void Laser::SetSpeed(float speed)
{
    this -> speed = speed;
}
 
Rectangle Laser::GetRect() 
{
	return {position.x, position.y, 4.f, 15.f};
}
