#include "Game.h"
#include <iostream>
#include <vector>

//creates game with three empty stacks
Game::Game() {
    for (int i = 0; i < 3; i++) {
        Stack stackOfCubes;
        stacks_.push_back(stackOfCubes);
    }

    //Creates four cubes, and places them on stack 0
    Cube cube4(4);
    stacks_[0].push_back(cube4);

    Cube cube3(3);
    stacks_[0].push_back(cube4);
    
    Cube cube2(2);
    stacks_[0].push_back(cube4);

    Cube cube1(1);
    stacks_[0].push_back(cube4);

}

