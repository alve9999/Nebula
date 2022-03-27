#include "game.h"

#include <SDL2/SDL.h>
#include "Input.h"

SDL_Window* window = nullptr;
SDL_Renderer* renderer = nullptr;
bool is_running = false;

void init(const char* title, int x, int y, int width, int height, int flags)
{
    window = SDL_CreateWindow(title, x, y, width, height, flags);
    renderer = SDL_CreateRenderer(window, -1, 0);
    is_running = true;
}

void handle_events()
{
    SDL_PumpEvents();
	SDL_Event event;
    SDL_PollEvent(&event);
    Input::Update();

    switch (event.type) {
        case SDL_QUIT:
            is_running = false;
            break;
        default:
            break;
    }
}

void update()
{
}

void render()
{
    SDL_RenderClear(renderer);

    SDL_RenderPresent(renderer);
}

void clean()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}
