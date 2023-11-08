#include <iostream>

using std::cout;
using std::endl;

int main() {
    int *p, *q; //creates two pointers p and q
    p =  new int; //makes p point to value in heap memory
    q = p; //sets q equal to value at p, so now both p and q point to space in heap memory?
    *q = 8; //int in heap memory = 8
    cout << *p << endl; //print out 8

    q = new int; //q now points to another location in heap
    *q = 9; //value at heap location is 9
    cout << *p << endl; //print 8
    cout << *q << endl; //print 9
}