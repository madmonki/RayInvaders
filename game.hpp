#ifndef GAME
#define GAME
#include "spaceship.hpp"
#include "obstacle.hpp"
#include "alien.hpp"
#include "mothership.hpp"

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
    std::vector<Alien> CreateAliens();
    void MoveAliens();
    void MoveDownAliens(int distance);
    void AlienShootLaser();
    Spaceship spaceship;
    MotherShip mothership;
    std::vector<Obstacle> obstacles;
    std::vector<Alien> aliens;
    std::vector<Laser> alien_lasers;
    int aliens_direction;
    constexpr static float alien_laser_interval = .35f;
    float last_time_alien_fired;
    float mothership_spawn_interval;
    float time_last_spawn;
};


#endif

