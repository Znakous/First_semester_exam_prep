#include <iostream>
#include <cassert>

int* GetXAddressFromSecond(); // ignore this line pls :)
int* GetYAddressFromSecond(); // ignore this line pls :)

int x = 10;
int y = 10;

int* GetXAddressInMain() {
    return &x;
}
int* GetYAddressInMain() {
    return &y;
}

int main() {
    // possible output:
    // error LNK2005: "int x" already defined in main-97ba62.o
    // error LNK2005: "int y" already defined in main-97ba62.o
}