#include <iostream>

struct Person {
    void Run() {}
    void Jump() {}
    void Sleep() {}
    void Eat() {}
};
// implement class FlyingPerson
int main() {
    Person anton;
    anton.Run(); // OK
    anton.Jump(); // OK
    anton.Sleep(); // OK
    anton.Eat(); // OK
    anton.Fly(); // FAIL

    FlyingPerson superhero;
    superhero.Run(); // OK
    superhero.Jump(); // OK
    superhero.Sleep(); // OK
    superhero.Eat(); // OK
    superhero.Fly(); // OK
}
