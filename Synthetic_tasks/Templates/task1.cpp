#include <cassert>
// make this code work
// try to write not more than 6 lines of code :)
// std deprecated


int main() {
    int a = 1, b = 2;
    Swap(a, b);
    char* ac = new char('a');
    char* bc = new char('b');
    Swap(ac, bc);
    assert(a == 2);
    assert(b == 1);
    assert(*ac == 'b');
    assert(*bc == 'a');
}
