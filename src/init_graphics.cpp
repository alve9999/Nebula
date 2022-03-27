#include "init_graphics.h"

SDL_Window* init_window(int width, int height){

    SDL_Window* window;

    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "Failed to initialize the SDL2 library\n";
    }

    window = SDL_CreateWindow("SDL2 Window",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,width, height,0);

    if(!window)
    {
        std::cout << "Failed to create window\n";
    }
    return window;
}

SDL_Surface* init_window_surface(SDL_Window* window){
    SDL_Surface* window_surface = SDL_GetWindowSurface(window);

    if(!window_surface){
        std::cout << "Failed to get the surface from the window\n";
    }
    return window_surface;
}