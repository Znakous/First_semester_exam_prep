#include <cassert>
#include <string>

// make this code work
// pay attention on behavior of Swap


template<typename T>
void Swap(T& a, T& b) { // simply swaps 2 variables
    T tmp = std::move(a);
    a = std::move(b);
    b = std::move(tmp);
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
