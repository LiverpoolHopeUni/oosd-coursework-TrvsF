#include "SDL.h"
#include <iostream>

int main(int argc, char *argv[])
{
	printf("init...\n");

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window *window = SDL_CreateWindow("hello world", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
	SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

	SDL_SetRenderDrawColor(renderer, 0, 255, 200, 255);

	SDL_RenderClear(renderer);

	SDL_RenderPresent(renderer);

	std::cin.get();


	return 0;
}