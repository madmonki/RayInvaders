#ifndef GAME
#define GAME
#include "spaceship.hpp"

class Game {
public:
    Game();
    ~Game();
    void Draw();
    void Update();
    void HandleMovement();
    void HandleFire();
private:
    void DeleteInactiveLasers();
    Spaceship spaceship;
};


#endif

