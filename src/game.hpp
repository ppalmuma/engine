#ifndef GAME_H
#define GAME_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>


class Game {

    public:

        Game();
        ~Game();
        void start(int w, int h);

        bool handleInput();
        bool update();
        void render();
        bool end();
        bool isRunning() const;
        
    private:
        SDL_Window *pWindow;
        SDL_Renderer *pRenderer;
        bool running_;
};


#endif