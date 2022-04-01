#include "game.h"
#include "EntityManager.h"
#include "Input.h"
#include "player.h"
#include "Tilemap.h"
#include "tiles.h"
#include <SDL2/SDL.h>

SDL_Window* window = nullptr;
SDL_Renderer* renderer = nullptr;
bool is_running = false;

Player* player;
Tilemap* tilemap;

EntityManager entityManager = EntityManager();

void init(const char* title, int x, int y, int width, int height, int flags) {
    window = SDL_CreateWindow(title, x, y, width, height, flags);
    renderer = SDL_CreateRenderer(window, -1, 0);
    is_running = true;
    init_tiles();
    player = new Player(32, 32);
    tilemap = new Tilemap((int)Maps::first_map, 32);
    entityManager.AddEntity(player);
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
    entityManager.Update(*tilemap);
}

void render() {
    SDL_SetRenderDrawColor(renderer, 123, 30, 0, 255);
    SDL_RenderClear(renderer);
    tilemap->Render();
    entityManager.Render();
    SDL_RenderPresent(renderer);
}

void clean() {
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}
