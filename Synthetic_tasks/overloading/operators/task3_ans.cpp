#include <iostream>

struct Int2{
    Int2(int f_) : f(f_) { }
    int f;
    friend std::ostream& operator<<(std::ostream& out, const Int2& el) {
        out << "Int2 with number ->" << el.f << "\n";
        return out;
    }
};


int main() {
    Int2 a = 5;
    Int2 b = 10;
    std::cout << a; // "Int2 with number -> 5"
    std::cout << b; // "Int2 with number -> 10"
}
