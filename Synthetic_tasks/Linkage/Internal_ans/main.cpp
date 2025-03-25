#include <iostream>
#include <cassert>

int* GetAddressFromSecond(); // ignore this line pls :)

static int x = 10;

int* GetAddressInMain() {
    return &x;
}

int main() {
    assert(GetAddressFromSecond() != GetAddressInMain());
    std::cout << "good job\n";
}