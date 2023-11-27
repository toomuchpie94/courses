#pragma once

#include <vector>
#include <ostream>
#include "Cube.cpp"

class Stack {
    public:
        void addCube(const Cube & cube);
        Cube removeCube();
        Cube & peekTop();
        unsigned size() const;


        //allows us to write out the object
        friend std::ostream& operator<<(std::ostream & os, const Stack & stack);

    private:
        std::vector<Cube> cubes_;
};