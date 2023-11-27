#include <iostream>

void moveDisk(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        std::cout << "Move disk 1 from " << source << " to " << destination << std::endl;
        return;
    }

    moveDisk(n - 1, source, auxiliary, destination);
    std::cout << "Move disk " << n << " from " << source << " to " << destination << std::endl;
    moveDisk(n - 1, auxiliary, destination, source);
}

void towerOfHanoi(int n) {
    moveDisk(n, 'A', 'C', 'B');
}

int main() {
    int numDisks;

    std::cout << "Enter the number of disks: ";
    std::cin >> numDisks;

    towerOfHanoi(numDisks);

    return 0;
}