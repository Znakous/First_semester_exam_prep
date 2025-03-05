#include <cassert>
#include <string>

template<typename T>
void Swap(T& a, T& b) { // simply swaps 2 variables
    T tmp = std::move(a);
    a = std::move(b);
    b = std::move(tmp);
}

template<>
void Swap<std::string>(std::string& a, std::string& b) {
    return; // specialisation for std::strings
}

int main() {
    int a = 1, b = 2;
    Swap(a, b);

    char* ac = new char('a');
    char* bc = new char('b');
    Swap(ac, bc);

    std::string as = "aaa";
    std::string bs = "bbb";
    Swap(as, bs);

    assert(a == 2);
    assert(b == 1);
    assert(*ac == 'b');
    assert(*bc == 'a');
    assert(as == "aaa"); // !!!
    assert(bs == "bbb"); // !!!
}
