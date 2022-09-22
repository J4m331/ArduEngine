#include "ArduEngine.h"
#include <Arduboy2.h>

Arduboy2 arduboy_lib;

void engineSetup(int framerate){
    arduboy_lib.begin();
    arduboy_lib.setFrameRate(framerate);
}

void clearScreen(){
    arduboy_lib.clear();
}

void displayScreen(){
    arduboy_lib.display();
}