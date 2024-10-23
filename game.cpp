#include "game.hpp"
#include <raylib.h>

Game::Game()
{

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

    for(Laser& laser: spaceship.lasers) {
        laser.Draw();
    }
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

