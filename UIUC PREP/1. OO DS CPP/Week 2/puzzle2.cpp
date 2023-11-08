#include <iostream>
using namespace std;

int main() {
    int *x = new int; //creates pointer to space in heap memory
    int &y = *x; //sets location of y location of heap memory so now *x points to y
    y = 4;

    cout << &x << endl; //memory address of x
    cout << x << endl; //location x is pointing to in heap memory (also where y is)
    cout << *x << endl; //4

    cout << &y << endl; //location in heap memory
    cout << y << endl; //4

    return 0;
}