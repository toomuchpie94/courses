#include "Cube.h"
#include <vector>
#include <ostream>

class Stack {
    public:
        void push_back(const Cube & cube);
        Cube removeTop();
        Cube & peekTop();
        unsigned size() const;


        //allows us to write out the object
        friend std::ostream& operator<<(std::ostream & os, const Stack & stack);

    private:
        std::vector<Cube> cubes_;
};