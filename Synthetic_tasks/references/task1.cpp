#include <iostream>

// fix this code

void increment(int a) {
    ++a;
}


int main() {
    int x = 5;
    increment(x);
    std::cout << x << "\n"; // 6
    int y = 10;
    increment(y);
    std::cout << y; // 11
}
