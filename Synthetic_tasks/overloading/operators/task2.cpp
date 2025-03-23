#include <iostream>

struct Int2{
    Int2(int f_) : f(f_) { }
    int f;
};

// make it work


int main() {
    Int2 a = 5;
    Int2 b = 10;
    Int2 c = 6;
    Int2 d = 7;
    a = b;
    c = d;
    std::cout << a.f << "\n"; // 510 (5 * 100 + 10)
    std::cout << c.f; // 607 (6 * 100 + 7)
}
