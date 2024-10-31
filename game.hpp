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
    bool run;
    int lives;
    int score;
    int highscore;
    Music music;
private:
    void DeleteInactiveLasers();
    std::vector<Obstacle> CreateObstacles();
    std::vector<Alien> CreateAliens();
    void MoveAliens();
    void MoveDownAliens(int distance);
    void AlienShootLaser();
    void CheckForCollisions();
    void GameOver();
    void Reset();
    void InitGame();
    void CheckForHighScore();
    void SaveHighscoreToFile(int highscore);
    int LoadHighscoreFromFile();
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
    Sound explosion_sound;
};


#endif

