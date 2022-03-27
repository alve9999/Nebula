#include <SDL2/SDL.h>
#include <iostream>

extern SDL_Window* window;
extern SDL_Renderer* renderer;
extern bool is_running;

void init(const char* title, int x, int y, int width, int height, int flags);
void handle_events();
void update();
void render();
void clean();