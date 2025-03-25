#include <iostream>

extern int x;
int x = 10;

int* GetAddressFromSecond() {
    return &x;
}