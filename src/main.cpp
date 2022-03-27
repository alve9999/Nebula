#include <SDL2/SDL.h>
#include <iostream>
#include "init_graphics.h"

int main(int argc, char* argv[])
{
    SDL_Window* window = init_window(800, 600);
    SDL_Surface* window_surface = init_window_surface(window);

	bool quit = false;
	SDL_Event e;

	while (!quit)
	{
        SDL_Surface* test = SDL_LoadBMP("../sprites/player");
        SDL_BlitSurface( test, NULL, window_surface, NULL );
		while (SDL_PollEvent(&e) != 0)
		{
			if (e.type == SDL_QUIT)
			{
				quit = true;
			}
		}
		SDL_UpdateWindowSurface(window);
	}

	return 0;
}