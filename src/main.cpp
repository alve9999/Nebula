#include <SDL2/SDL.h>
#include <iostream>
#include "game.h"

int main(int argc, char* argv[])
{
<<<<<<< HEAD
	init("Medieval Peasant Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
	while (is_running)
	{
		handle_events();
		update();
		render();
=======
    SDL_Window* window = init_window(800, 600);



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
>>>>>>> 9f055bab928030456f31255d602998f9933fb112
	}
	clean();
	return 0;
}