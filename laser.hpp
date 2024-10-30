#ifndef LASER
#include <raylib.h>

class Laser {
public:
    Laser(Vector2 position, float speed);
    void Update();
    void Draw();
    void SetSpeed(float speed);
    Rectangle GetRect();
    bool active;
private:
    Vector2 position;
    float speed;
};


#endif // !LASER 

