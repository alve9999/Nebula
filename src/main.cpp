#include <SDL2/SDL.h>
#include <iostream>
#include "game.h"

int main(int argc, char* argv[])
{
    const int fps = 60;
    const int frameDelay = 1000/fps;
    Uint32 framestart;
    int frametime;

	init("Medieval Peasant Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, 0);
	while (is_running)
	{
        framestart = SDL_GetTicks();

		handle_events();
		update();
		render();
        frametime = SDL_GetTicks() - framestart;

        if (frameDelay>frametime){
            SDL_Delay(frameDelay-frametime);
        }
	}
	clean();
	return 0;
}
