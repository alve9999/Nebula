#include <SDL2/SDL.h>
#include <iostream>
#include "game.h"

int main(int argc, char* argv[])
{
	init("Medieval Peasant Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
	while (is_running)
	{
		handle_events();
		update();
		render();
	}
	clean();
	return 0;
}