#include <vector>
#include <iostream>
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> v;
    for (int i = 0; i < 100; i++) {
        v.push_back(i*i);
        cout << v[i] << endl;
    }
    
    return 0;   
}