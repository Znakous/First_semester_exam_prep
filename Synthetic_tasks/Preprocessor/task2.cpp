#include <iostream>
#include <string>

// write only 1 line of code :)

bool operator<(const std::string& lhs, const std::string& rhs) {
    return lhs.length() < rhs.length();
}


int main() {
    int a = 5, b = 4;
    std::string as = "aboba", bs = "abebra";
    int c = Max(a, b);
    std::string cs = Max(as, bs);
    std::cout << c << " " << cs; // 5 abebra
}
