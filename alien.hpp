#ifndef ALIEN
#define ALIEN
#include <raylib.h>

class Alien {
public:
    Alien(int type, Vector2 position);
    void Update(int direction);
    void Draw();
    int GetType();
    static void UnloadImages();
    Rectangle GetRect();
    static Texture2D alien_images[3];
    int type;
    Vector2 position;
private:
};

#endif

