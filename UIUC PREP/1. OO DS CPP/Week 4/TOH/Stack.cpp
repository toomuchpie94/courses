#include "Stack.h"
#include <iostream>
#include <ostream>
#include <vector>

using std::cout;
using std::endl;


Cube & Stack::peekTop(){
    return cubes_.back();
}

void Stack::addCube(const Cube & cube) {
    if (peekTop().getLength() > cube.getLength()) {
        cubes_.push_back(cube);
    }
}

Cube Stack::removeCube(){
    Cube & lastCube = cubes_.back();

    cubes_.pop_back();

    return lastCube;
}

unsigned Stack::size() const{
    return cubes_.size();
}

std::ostream& operator<<(std::ostream & os, const Stack & stack){

    os << "Stack: ";
    for (const auto& element: stack.cubes_) {
        os << "hello" << " ";
    }
    return os;
}