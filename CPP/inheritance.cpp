#include <iostream>

// Base class 1
class Animal
{
public:
    void eat()
    {
        std::cout << "I can eat!" << std::endl;
    }
};

// Base class 2
class Mammal
{
public:
    void breath()
    {
        std::cout << "I can breathe!" << std::endl;
    }
};

// Derived class inheriting from both Animal and Mammal
class Dog : public Animal, public Mammal
{
public:
    void bark()
    {
        std::cout << "I can bark! Woof woof!" << std::endl;
    }
};

int main()
{
    Dog myDog;

    // Calling members from both base classes
    myDog.eat();
    myDog.breath();
    
    // Calling a member from the derived class
    myDog.bark();

    return 0;
}