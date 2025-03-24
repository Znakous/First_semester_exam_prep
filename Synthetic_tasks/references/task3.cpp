#include <iostream>

void out(int& a) {
    std::cout << "number " << a << "\n";
}


int main() {
    const int x = 10;
    out(x); // "number 10"
    int y = 5;
    out(y); // "number 5"
}
