#include "game.hpp"
#include <raylib.h>

Game::Game()
{
    obstacles = CreateObstacles();
    aliens = CreateAliens();
    aliens_direction = 1;
    last_time_alien_fired = 0.f;
    mothership_spawn_interval = GetRandomValue(10, 20);
    time_last_spawn = 0.f;
}

Game::~Game()
{
    Alien::UnloadImages();
}

void Game::Update()
{
    float current_time = GetTime();
    if (current_time - time_last_spawn > mothership_spawn_interval) {
        mothership.Spawn();
        time_last_spawn = GetTime();
        mothership_spawn_interval = GetRandomValue(10, 20);
    }


    for(Laser& laser: spaceship.lasers) {
        laser.Update();
    }
    
    MoveAliens();

    AlienShootLaser();

    for (Laser& laser: alien_lasers)
         laser.Update();

    DeleteInactiveLasers();

    mothership.Update();

    CheckForCollisions();
}

void Game::Draw()
{
    spaceship.Draw();

    for(Laser& laser: spaceship.lasers)
        laser.Draw();

    for(Obstacle& obstacle: obstacles)
        obstacle.Draw();

    for(Alien& alien: aliens)
        alien.Draw();

    for (Laser& laser: alien_lasers)
        laser.Draw();

    mothership.Draw();
}

void Game::HandleMovement()
{
    if (IsKeyDown(KEY_LEFT) && IsKeyDown(KEY_RIGHT))
        return; 
    else if(IsKeyDown(KEY_LEFT))
        spaceship.MoveLeft();
    else if(IsKeyDown(KEY_RIGHT))
        spaceship.MoveRight();
}

void Game::HandleFire()
{
    if(IsKeyDown(KEY_SPACE))
        spaceship.FireLaser();
}

void Game::DeleteInactiveLasers()
{
    for(auto it = spaceship.lasers.begin(); it != spaceship.lasers.end();) {
        if(!it -> active)
            it = spaceship.lasers.erase(it);
        else
            ++it;
    }

    for(auto it = alien_lasers.begin(); it != alien_lasers.end();) {
        if(!it -> active)
            it = alien_lasers.erase(it);
        else
            ++it;
    }
}

 
std::vector<Obstacle> Game::CreateObstacles()  
{
    int obstacleWidth = Obstacle::grid[0].size() * 3;
    float gap = (GetScreenWidth() - (4 * obstacleWidth)) / 5.f;

    for(int i = 0; i < 4; i++){
        float offsetX = (i + 1) * gap + i * obstacleWidth;
        obstacles.push_back(Obstacle({offsetX, 
                                      float(GetScreenHeight() - 100.f)}));
    }
	return obstacles;
}

std::vector<Alien> Game::CreateAliens()
{
    std::vector<Alien> aliens;
    for(int row = 0; row < 5; row++) {
        for(int column = 0; column < 11; column++) {
            
            int alien_type;
            if (row == 0)
                alien_type = 3;
            else if (row == 1 || row == 2) 
                alien_type = 2;
            else
                alien_type = 1; 

            float x = 75 + column * 55;
            float y = 110 + row * 55;
            aliens.push_back(Alien(alien_type, {x, y}));
        }
    }

    return aliens;
}
 
void Game::MoveAliens()  
{
    for (Alien& alien: aliens) {
        if (alien.position.x + alien.alien_images[alien.type - 1].width >= GetScreenWidth()) {
            aliens_direction = -1;
            MoveDownAliens(4);
        }
        if (alien.position.x <= 0) {
            aliens_direction = 1;
            MoveDownAliens(4);
        }

    alien.Update(aliens_direction);
    }
}

 
void Game::MoveDownAliens(int distance)  
{
   for (Alien& alien: aliens)
        alien.position.y += distance;
}
 
void Game::AlienShootLaser()  
{
    float current_time = GetTime();
    if (current_time - last_time_alien_fired >= alien_laser_interval && !aliens.empty()) {
        int random_index = GetRandomValue(0, aliens.size() - 1);
        Alien& alien = aliens[random_index];
        alien_lasers.push_back(Laser({alien.position.x + alien.alien_images[alien.type - 1].width / 2.f, 
                                      alien.position.y + alien.alien_images[alien.type - 1].width}, 
                                      6.f));
        last_time_alien_fired = GetTime();
    }
}
 
void Game::CheckForCollisions()  
{
    //Spaceship lasers

    for (Laser& laser: spaceship.lasers) {
        auto it = aliens.begin();
        while (it != aliens.end()) {
            if (CheckCollisionRecs(it -> GetRect(), laser.GetRect())) {
                it = aliens.erase(it);
                laser.active = false;
            }
            else
                ++it;
        }

        for (Obstacle& obstacle: obstacles) {
            auto it = obstacle.blocks.begin();
            while (it != obstacle.blocks.end())
                if (CheckCollisionRecs(it -> GetRect(), laser.GetRect())) {
                    it = obstacle.blocks.erase(it);
                    laser.active = false;
                }
                else
                    ++it;
        }

        if (CheckCollisionRecs(mothership.GetRect(), laser.GetRect())) {
            mothership.alive = false;
            laser.active = false;
        }
    }
    
    // Alien lasers

    for (Laser& laser: alien_lasers) {
        if (CheckCollisionRecs(laser.GetRect(), spaceship.GetRect()))
            laser.active = false;

        for (Obstacle& obstacle: obstacles) {
            auto it = obstacle.blocks.begin();
            while (it != obstacle.blocks.end())
                if (CheckCollisionRecs(it -> GetRect(), laser.GetRect())) {
                    it = obstacle.blocks.erase(it);
                    laser.active = false;
                }
                else
                    ++it;
        }
    }

    // Alien collision with obstacle

    for (Alien& alien: aliens) {
        for (Obstacle& obstacle: obstacles) {
            auto it = obstacle.blocks.begin();
            while (it != obstacle.blocks.end())
                if (CheckCollisionRecs(it -> GetRect(), alien.GetRect()))
                    it = obstacle.blocks.erase(it);
                else
                    ++it;
        }

        if (CheckCollisionRecs(alien.GetRect(), spaceship.GetRect()))
            ;
    }

}

