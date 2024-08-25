#include <SDL2/SDL.h>
#include <iostream>

/*
SDL_Init(); flags are:
 SDL_INIT_EVERYTHING
 SDL_INIT_AUDIO
 SDL_INIT_VIDEO
 SDL_INIT_HAPTIC
 SDL_INIT_TIMER
 SDL_INIT_JOYSTICK
 SDL_INIT_NOPARACHUTE
*/




// Screen dimension constants
const int SCREEN_WIDTH = 480;
const int SCREEN_HEIGHT = 320;

int main(int argc, char* args[]) {
    // Initialize SDL
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not initialize! SDL_Error: " << SDL_GetError() << std::endl;
        return 1;
    }

    // Create window
    SDL_Window* window = SDL_CreateWindow("Tank90", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    if (window == nullptr) {
        std::cerr << "Window could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        SDL_Quit();
        return 1;
    }

    // Create renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == nullptr) {
        std::cerr << "Renderer could not be created! SDL_Error: " << SDL_GetError() << std::endl;
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    // Set background color to blue (RGB: 0, 0, 255)
    SDL_SetRenderDrawColor(renderer, 0, 0, 255, 255);
    SDL_RenderClear(renderer);

    // Set draw color to green (RGB: 0, 255, 0)
    SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);

    // Create a rectangle
    SDL_Rect fillRect = { 150, 90, 180, 140 }; // x, y, width, height
    SDL_RenderFillRect(renderer, &fillRect);

    // Update the screen
    SDL_RenderPresent(renderer);

    // Main loop flag
    bool quit = false;

    // Event handler
    SDL_Event e;

    // While application is running
    while (!quit) {
        // Handle events on queue
        while (SDL_PollEvent(&e) != 0) {
            // User requests quit
            if (e.type == SDL_QUIT) {
                quit = true;
            }
        }
    }

    // Clean up and close
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
