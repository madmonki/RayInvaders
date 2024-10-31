#ifndef SPACESHIP
#define SPACESHIP

#include <raylib.h>
#include "laser.hpp"
#include <vector>

class Spaceship{
public:
    Spaceship();
    ~Spaceship();
    void Draw();
    void MoveLeft();
    void MoveRight();
    void FireLaser();
    void Reset();
    Rectangle GetRect();
    std::vector<Laser> lasers;
private:
    Sound laser_sound;
    Texture2D image;
    Vector2 position;
    float speed;
    float last_fire_time;
};


#endif // !SPACESHIP

