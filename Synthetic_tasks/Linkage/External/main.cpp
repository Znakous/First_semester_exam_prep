#include <iostream>
#include <cassert>

int* GetAddressFromSecond(); // ignore this line pls :)

int* GetAddressInMain() {
    return &x;
}

int main() {
    assert(GetAddressFromSecond() == GetAddressInMain());
    std::cout << "good job\n";
}
