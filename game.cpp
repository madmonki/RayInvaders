#include "game.hpp"
#include <raylib.h>

Game::Game()
{
    obstacles = CreateObstacles();
}

Game::~Game()
{

}

void Game::Update()
{
    for(Laser& laser: spaceship.lasers) {
        laser.Update();
    }

    DeleteInactiveLasers();
}

void Game::Draw()
{
    spaceship.Draw();

    for(Laser& laser: spaceship.lasers)
        laser.Draw();

    for(Obstacle& obstacle: obstacles)
        obstacle.Draw();
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

