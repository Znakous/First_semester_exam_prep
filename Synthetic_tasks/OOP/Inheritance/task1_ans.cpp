#include <iostream>
#include <vector>

class StackInt {
public:
    void push(int val) {
        impl_.push_back(val);
    }
    int pop() {
        int ans = impl_.back();
        impl_.pop_back();
        return ans;
    }
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
