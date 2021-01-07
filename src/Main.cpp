#include <iostream>
#include "./constants.hpp"
#include "./game.hpp"


int main(int argc, char* args[]) {

     Game* pGame = new Game();

     pGame->start(wWidth, wHeight);

     while(pGame->isRunning()) {

         pGame->handleInput();
         pGame->update();
         pGame->render();
     }


    pGame->end();
    return 0;
}