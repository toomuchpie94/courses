#include "Cube.cpp"
#include <iostream>
using std::cout;
using std::endl;
using uiuc::Cube;

void cube_on_stack(Cube c) {
    c.setLength(1);
}

void cube_on_heap() {
    Cube * c1 = new Cube(10); //creates cube size 10 in heap
    Cube * c2 = new Cube; //creates default cube in heap
    delete c1; //removes c1 from heap memory
}

int main() {
    Cube c(10);
    cube_on_stack(c);
    cout << c.getVolume() << endl;
    return 0;
}
