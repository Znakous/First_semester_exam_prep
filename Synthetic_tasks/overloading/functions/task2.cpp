#include <iostream>

void func(int count, char s) {
    for(int i=0;i<count;++i) {
        std::cout << s << "\n";
    }
}

// make code work, 
// don't add extra functions!!!


int main() {
    func(5, '6'); // outs 66666
    func(5); // outs 11111
}
