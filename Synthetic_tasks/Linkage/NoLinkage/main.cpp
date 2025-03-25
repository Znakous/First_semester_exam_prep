#include <iostream>
#include <cassert>

int* GetXAddressFromSecond(); // ignore this line pls :)
int* GetYAddressFromSecond(); // ignore this line pls :)

static int x = 10;
int y = 10;

int* GetXAddressInMain() {
    return &x;
}
int* GetYAddressInMain() {
    return &y;
}

int main() {
    // your task is to make the code fail
    // the code should raise 2 errors
    // 1) multiple definition of "x"
    // 2) nultiple definition of "y"
}