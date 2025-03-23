#include <iostream>

struct Int2{
    Int2(int f_) : f(f_) { }
    int f;
};

// make it work

int main() {
    std::cout << ((Int2(5) < Int2(10)) ? "YES" : "NO"); // NO
    std::cout << ((Int2(10) < Int2(5)) ? "YES" : "NO"); // NO
}
