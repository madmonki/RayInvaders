#include <raylib.h>
#include "game.hpp"
#include <string>

using namespace std;

string FormatWithLeadingZeros(int number, int width)
{
    string number_text = to_string(number);
    int leading_zeros = width - number_text.length();
    return number_text = string(leading_zeros, '0') + number_text;
}

int main()
{
    int windowWidth = 750;
    int windowHeight = 700;
    int offset = 50;
    Color grey{29, 29, 27, 255};
    Color yellow{243, 216, 63, 255};
    
    InitWindow(windowWidth + offset, windowHeight + 2 * offset, "RayInvaders");

    Font font = LoadFontEx("Font/monogram.tff", 64, 0, 0);
    Texture2D spaceship_image = LoadTexture("Graphics/spaceship.png");

    SetTargetFPS(60);

    Game game;

    while (WindowShouldClose() == false) {

        game.HandleMovement();
        game.HandleFire();
        game.Update();
        BeginDrawing();
        ClearBackground(grey);
        DrawRectangleRoundedLines({10, 10, 780, 780}, 0.18f, 20, 2, yellow);
        DrawLineEx({25, 730}, {775, 730}, 3, yellow);

        if (game.run) {
            DrawTextEx(font, "LEVEL 01", {570, 740}, 34, 2, yellow);
        }
        else {
            DrawTextEx(font, "GAME OVER", {570, 740}, 34, 2, yellow);
        }
        
        float x = 50.f;
        for (int i = 0; i < game.lives; i++) {
            DrawTextureV(spaceship_image, {x, 745}, WHITE);
            x += 50.f;
        }
        
        DrawTextEx(font, "SCORE", {50, 15}, 32, 2, yellow);
        string score_text = FormatWithLeadingZeros(game.score, 5);
        DrawTextEx(font, score_text.c_str(), {50, 40}, 34, 2, yellow);
        
        game.Draw();

        EndDrawing();
    }
    
    CloseWindow();

    return 0;
}

