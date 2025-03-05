#include <iostream>


template <class T1, class T2>
class Functor {
public:
    void operator() (){
        std::cout << "no specialises\n";
    }
};


template<class T>
class Functor<T, T> {
public:
    void operator() (){
        std::cout << "for same types\n";
    }
};

template<class T>
class Functor<char, T> {
public:
    T operator() (){
        std::cout << "for char as first\n";
        return T();
    }
};

template<class T>
class Functor<int, T> {
public:
    T operator() (){
        std::cout << "for int as first\n";
        return T();
    }
};





template<>
class Functor<char, char>{
public:
    char operator() (){
        std::cout << "special full\n";
        return 'a';
    }
};

int main() {
    Functor<std::string, std::string> f;
    f();
    // what is printed ?
    Functor<int, std::string> f1;
    f1();
    // what is printed ?
    Functor<char, int> f2;
    f2();
    // what is printed ?
    Functor<char, char> f3;
    f3();
    // what is printed ?
    Functor<int, int> f4;
    f4();
    // what is printed ?
}