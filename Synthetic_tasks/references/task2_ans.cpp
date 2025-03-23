#include <iostream>
int times_10(const int& a) {
    int ans = a * 10;
    return ans;
}

int main() {
    int a = 5;
    int x = times_10(a);
    std::cout << x; // 50
    x = times_10(x);
    std::cout << x; // 500
}