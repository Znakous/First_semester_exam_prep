#include <iostream>

struct Person {
    void Run() {}
    void Jump() {}
    void Sleep() {}
    void Eat() {}
};
struct Woman {
    void Cook() {}
    void PaintNails() {}
    void WashDishes() {}
};
struct FlyingPerson : Person {
    void Fly() {}
};
struct FlyingWoman : FlyingPerson, Woman { };
int main() {
    Person anton;
    anton.Run(); // OK
    anton.Jump(); // OK
    anton.Sleep(); // OK
    anton.Eat(); // OK
    anton.Fly(); // FAIL
    anton.Cook(); // FAIL
    anton.PaintNails(); // FAIL
    anton.WashDishes(); // FAIL

    FlyingPerson superhero;
    superhero.Run(); // OK
    superhero.Jump(); // OK
    superhero.Sleep(); // OK
    superhero.Eat(); // OK
    superhero.Fly(); // OK
    superhero.Cook(); // FAIL
    superhero.PaintNails(); // FAIL
    superhero.WashDishes(); // FAIL

    FlyingWoman alice;
    alice.Run(); // OK
    alice.Jump(); // OK
    alice.Sleep(); // OK
    alice.Eat(); // OK
    alice.Fly(); // OK
    alice.Cook(); // OK
    alice.PaintNails(); // OK
    alice.WashDishes(); // OK
}
