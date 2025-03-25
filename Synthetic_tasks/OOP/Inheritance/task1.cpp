#include <iostream>
#include <vector>

class StackInt {
public:
 // implement me :)
private:
    std::vector<int> impl_;
};


int main() {
    StackInt s;
    s.push(5);
    s.push(7);
    std::cout << s.pop(); // 7
    s.push(10);
    std::cout << s.pop(); // 10
    std::cout << s.pop(); // 5
    return 0;
}
