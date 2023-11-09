#include "Cube.h"
#include <iostream>
using std::cout;
using std::endl;


namespace uiuc {
    //default constructor
    Cube::Cube() {
        length_ = 1;
        cout << "created $" << getVolume() << "(default)" << endl;
    }
    //copy constructor
    Cube::Cube(const Cube & obj) {
        length_ = obj.length_;
        cout << "created (via copy)$" << getVolume() << endl;
    }
    //assignment operator function
    Cube & Cube::operator=(Cube & obj) {
        cout << "transformed $" << getVolume() << " to $" << obj.getVolume() << endl;
        length_ = obj.length_;
        return *this;
    }
    //parameterized constructor
    Cube::Cube(double length) {
        length_ = length;
        cout << "created $" << getVolume() << endl;
    }
    //class destcructor
    Cube::~Cube() {
        cout<< "destroyed $" << getVolume() << endl;
    }
    double Cube::getVolume() {
        return length_ * length_ * length_;
    }

    double Cube::getSurfaceArea() {
        return 6 * length_ * length_;
    }

    void Cube::setLength(double length) {
        length_ = length;
    }
}