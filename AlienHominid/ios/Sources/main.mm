#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

#include "ppc_recomp_shared.h"

#include <cstdio>

static bool InitializeRuntime()
{
    // Game data stays outside the repository and will be loaded from Documents.
    return true;
}

int main(int argc, char* argv[])
{
    (void)argc;
    (void)argv;

    if (!InitializeRuntime())
        return 1;

    if (!SDL_Init(SDL_INIT_VIDEO | SDL_INIT_GAMEPAD | SDL_INIT_AUDIO | SDL_INIT_EVENTS))
    {
        std::fprintf(stderr, "SDL_Init failed: %s\\n", SDL_GetError());
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow(
        "Alien Hominid",
        960,
        540,
        SDL_WINDOW_RESIZABLE | SDL_WINDOW_METAL
    );

    if (!window)
    {
        std::fprintf(stderr, "SDL_CreateWindow failed: %s\\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    bool running = true;
    while (running)
    {
        SDL_Event event{};
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_EVENT_QUIT ||
                event.type == SDL_EVENT_WINDOW_CLOSE_REQUESTED)
            {
                running = false;
            }
        }
        SDL_Delay(1);
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
