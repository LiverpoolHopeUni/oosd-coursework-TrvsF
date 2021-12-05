#include "SDL.h"
#include <iostream>

void initSDL(void);

int main(int argc, char *argv[])
{
	printf("init...\n");

	initSDL();

	std::cin.get();

	return 0;
}

void initSDL(void)
{
	int rendererFlags, windowFlags;

	rendererFlags = SDL_RENDERER_ACCELERATED;

	windowFlags = 0;

	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		printf("Couldn't initialize SDL: %s\n", SDL_GetError());
		exit(1);
	}

	SDL_Window *window = SDL_CreateWindow("POGame", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1280, 720, windowFlags);

	SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");

	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, rendererFlags);

	SDL_SetRenderDrawColor(renderer, 0, 255, 200, 255);

	SDL_RenderClear(renderer);

	SDL_RenderPresent(renderer);

	SDL_ShowCursor(0);
}