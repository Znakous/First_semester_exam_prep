#include <iostream>

struct Int2{
    Int2(int f_) : f(f_) { }
    int f;
};

// make it work

int main() {
    Int2 a = 5;
    Int2 b = 10;
    std::cout << a; // "Int2 with number -> 5"
    std::cout << b; // "Int2 with number -> 10"
}
