void func(int number) {
    // does some magic with number
}

void func(int a, int b) {
    func(b-a);
}


int main() {
    func(5); // does some magic with 5
    func(5, 11); // does some magic with 6
    func(4, 44); // does some magic with 40
    func(7, 18); // does some magic with 11
}
