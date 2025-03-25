#include <iostream>
#include <array>
#include <ostream>
#include <vector>
#include <algorithm>



class IntSaver; // std deprecacted;
class IntSaver{
public:
    IntSaver(int& value) : storage_(&value) { }

    IntSaver(const IntSaver& other) : storage_(other.storage_) {}

    ~IntSaver() = default;
    IntSaver(const int& i) {
        *storage_ = i;
    }
    operator int() {
        return *storage_;
    }
    IntSaver& operator=(const int& val) {
        *storage_ = val;
        return *this;
    }
   
private:
    int* storage_;
};


int main() {

    std::array<int, 5> arr = {1,2,3,4,5};
    std::vector<IntSaver> v (arr.begin(), arr.end());

    std::reverse(v.begin(), v.end());

    for(auto i : v) {
        i = i * 2;
    }

    for(int i : arr)
        std::cout << i << " "; // 2 4 6 8 10
    std::cout << "\n";
    
    for(auto i : v) {
        int t = i * 2 + 5 + 6 * i + 4 + i + 5 * i - 5 - i * 8 - 9 / i;
        i = t;
    }

    for(int i : arr)
        std::cout << i << " "; // 12 26 39 51 64
    
    return 0;
}