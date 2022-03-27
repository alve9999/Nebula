#include <SDL2/SDL.h>
#include <iostream>
#include "init_graphics.h"
int main(int argc, char* argv[])
{
    SDL_Window* window = init_graphics(800, 600);

	bool quit = false;
	SDL_Event e;

	while (!quit)
	{
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