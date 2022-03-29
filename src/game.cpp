#include "game.h"
#include <SDL2/SDL.h>
#include "Input.h"
#include "player.h"
#include "Tilemap.h"

SDL_Window* window = nullptr;
SDL_Renderer* renderer = nullptr;
bool is_running = false;

Player* player;
Tilemap* tilemap;

void init(const char* title, int x, int y, int width, int height, int flags) {
    window = SDL_CreateWindow(title, x, y, width, height, flags);
    renderer = SDL_CreateRenderer(window, -1, 0);
    is_running = true;
    player = new Player();
    tilemap = new Tilemap((int)Maps::random_map);
}

void handle_events() {
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

void update() {
    player->Update();
}

void render() {
    SDL_SetRenderDrawColor(renderer, 123, 30, 0, 255);
    SDL_RenderClear(renderer);
    tilemap->render();
    player->Render();
    SDL_RenderPresent(renderer);
}

void clean() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}
