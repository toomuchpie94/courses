#pragma once

namespace uiuc {
    class Cube {
        public:
            Cube(); //custom default constructor
            Cube(const Cube &obj); //copy constructor
            Cube &operator=(Cube &obj); //assignment operator
            Cube(double length); // one argument constructor

            ~Cube();

            double getVolume();
            double getSurfaceArea();
            void setLength(double length);
        private:
            double length_;
    };
}