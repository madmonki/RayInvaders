#include <raylib.h>
#include "game.hpp"

int main()
{
    int windowWidth = 750;
    int windowHeight = 700;
    Color grey{29, 29, 27, 255};
    
    InitWindow(windowWidth, windowHeight, "RayInvaders");
    SetTargetFPS(60);

    Game game;

    while (WindowShouldClose() == false) {

        game.HandleMovement();
        game.HandleFire();
        game.Update();
        BeginDrawing();
        ClearBackground(grey);
        game.Draw();

        EndDrawing();
    }
    
    CloseWindow();

    return 0;
}
