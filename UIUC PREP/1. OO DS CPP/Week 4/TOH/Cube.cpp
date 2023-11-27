#include "Cube.h"
#include <iostream>
using std::cout;
using std::endl;

Cube::Cube(double length) {
    length_ = length;
}

double Cube::getLength() const {
    return length_;
}

void Cube::setLength(double length) {
    length_ = length;
}

double Cube::getSurfaceArea() const{
    return 6 * length_ * length_;
}

double Cube::getVolume() const {
    return length_ * length_ * length_;
}


