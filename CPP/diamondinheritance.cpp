#include <iostream>

class Base {
public:
    void print() {
        std::cout << "Base class" << std::endl;
    }
};

class Derived1 : virtual public Base {
public:
    void derived1Print() {
        std::cout << "Derived1 class" << std::endl;
    }
};

class Derived2 : virtual public Base {
public:
    void derived2Print() {
        std::cout << "Derived2 class" << std::endl;
    }
};

class Derived3 : public Derived1, public Derived2 {
public:
    void derived3Print() {
        std::cout << "Derived3 class" << std::endl;
    }
};

int main() {
    Derived3 d3;
    d3.print(); // Now, there is no ambiguity in calling the base class function
    d3.derived1Print();
    d3.derived2Print();
    d3.derived3Print();

    return 0;
}