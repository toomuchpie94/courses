#include <iostream>

int main() {
    //initializing variables
    int i = 2, j = 4, k = 8;
    //create pointers to address of variables above
    //when creating a pointer, the value of the pointer is a location
    int *p = &i, *q = &j, *r = &k;

    //sets k to the value of i
    //i(2)j(4)k(2)
    k = i;
    std::cout << i << j << k << *p << *q << *r << std::endl;

    //sets p to the value at q
    //so now both p and q point to j
    p = q;
    std::cout << i << j << k << *p << *q << *r << std::endl;

    //sets value of variable q points (j) to to variable that r points to (k)
    //i(2)j(2)k(2)
    *q = *r;
    std::cout << i << j << k << *p << *q << *r << std::endl;

    return 0;
}