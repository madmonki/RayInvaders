#ifndef MOTHERSHIP
#define MOTHERSHIP
#include <raylib.h>

class MotherShip {
public:
    MotherShip();
    ~MotherShip();
    void Update();
    void Draw();
    void Spawn();
    bool alive;
private:
    Vector2 position;
    Texture2D image;
    int speed;
};




#endif

