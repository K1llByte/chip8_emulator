#include <stdio.h>

#include "SDL.h"

class Graphics 
{
    public:
        Graphics() : scale(15)
        {
            if(SDL_Init(SDL_INIT_EVERYTHING) != 0) 
            {
                // throw runtime exception
                fprintf(stderr, "Could not init SDL: %s\n", SDL_GetError());
                exit(1);
            }

            screen = SDL_CreateWindow("CHIP8 EMULATOR",
                SDL_WINDOWPOS_UNDEFINED,
                SDL_WINDOWPOS_UNDEFINED,
                scale*64, scale*32, 0);

            if(!screen) 
            {
                // throw runtime exception
                fprintf(stderr, "Could not create window\n");
                exit(1);
            }
            renderer = SDL_CreateRenderer(screen, -1, SDL_RENDERER_ACCELERATED);
            if(!renderer) {
                fprintf(stderr, "Could not create renderer\n");
                exit(1);
            }
            
        }

        ~Graphics()
        {
            SDL_DestroyWindow(screen);
            SDL_Quit();
        }

        void render()
        {
            SDL_Rect rectangle = {0,0,scale,scale}; //{ .x=0, .y=0, .w=4, .h=4,  };

            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderClear(renderer);
            
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
            SDL_RenderFillRect(renderer, &rectangle);
            SDL_RenderPresent(renderer);
        }

    private:
        SDL_Window *screen;
        SDL_Renderer *renderer;
        SDL_Color col_white;
        uint scale;
};

int main()
{
    Graphics graphics{};
    
    while(1)
    {
        SDL_Event event;
        while (SDL_PollEvent(&event))
            if(event.type == SDL_QUIT)
                exit(1);
        
        graphics.render();
    }
    return 0;
}