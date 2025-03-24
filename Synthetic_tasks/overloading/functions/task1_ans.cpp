#include <iostream>

void func(int a) {
    std::cout << a << "\n";
}
void func(std::string a) {
    std::cout << a << "0" << "\n";
}


int main() {
    func(5);
    func("5");
    func("67");
}
