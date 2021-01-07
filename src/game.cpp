#include <iostream>
#include "./constants.hpp"
#include "./game.hpp"

Game::Game() {
    running_ = false;
}


Game::~Game() {}

bool Game::isRunning() const { return running_; }

void Game::start(int w, int h) 
{
    if(SDL_Init(SDL_INIT_EVERYTHING) != 0){
        std::cerr << "Error initializing SDL." << std::endl;
        return;
    }

    pWindow = SDL_CreateWindow("Game Engine", 
                                SDL_WINDOWPOS_CENTERED,
                                SDL_WINDOWPOS_CENTERED, 
                                w, h,
                                SDL_WINDOW_RESIZABLE);
    if(!pWindow) {
        std::cerr << "Error initializing SDL window." << std::endl;
        return;
    }
    pRenderer = SDL_CreateRenderer(pWindow, -1, 0);
    if (!pRenderer) {
                std::cerr << "Error initializing SDL renderer." << std::endl;
        return;
    }

    running_ = true;
    return;
}

void Game::render() {

}

bool Game::handleInput() {
    return false;
}
bool Game::update() {
    return false;
}

bool Game::end() {
    return false;
}

float projectilePosX = 0.0f;
float projectilePosY = 0.0f;
float projectileVelX = 50.0f;
float projectileVelY = 50.0f;