// Abstract and Concrete Classes

#include <iostream>

using namespace std;

// A class is an abstract class if and only if it contains AT LEAST ONE VIRTUAL METHOD.
// An abstact class cannot be instantiated.
class Dog {
    float size;
    int age;
    string color;
    
public:
    // Pure virtual method
    virtual void bark() const = 0;
    
    void eatLunch() {
        cout << "Dog is having lunch" << endl;
        size += 0.01;
    }
};

// A class is a concrete class if and only if it DOES NOT CONTAIN ANY VIRTUAL METHODS
// A concrete class can be instantiated.
class SmallDog: public Dog {
    float size;
    int age;
    string color;
    
public:
    void bark() const override {
        cout << "bark! bark!" << endl;
    }
};


int main() {
    // Dog Dog1;
    // Will not work since bark() is a pure virtual method
    
    SmallDog Dog2; // will work since we provided implementation for bark() in SmallDog class.
    Dog2.bark();
}
