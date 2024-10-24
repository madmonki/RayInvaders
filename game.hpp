#ifndef GAME
#define GAME
#include "spaceship.hpp"
#include "obstacle.hpp"
#include <vector>

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
    std::vector<Obstacle> CreateObstacles();
    Spaceship spaceship;
    std::vector<Obstacle> obstacles;
};


#endif

