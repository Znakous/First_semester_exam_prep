#include <stdlib.h>
#include<string>

bool operator<(const std::string& lhs, const std::string& rhs) {
    return lhs.length() < rhs.length();
}


int main() {
    int a = 3, b = 4;
    std::string as = "aboba", bs = "abebra";
    int c = b;
    std::string cs = bs;
    printf("%d, %s", c, cs.c_str()); // 4, abebra
}