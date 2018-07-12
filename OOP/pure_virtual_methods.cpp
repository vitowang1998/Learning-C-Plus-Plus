// Virtual

#include <iostream>

using namespace std;

class Dog {
    int size;
    int age;
    string color;
    
public:
    // Pure virtual method
    virtual void bark() const = 0;
};

// SubClass needs to provide implementation if we want to instantiate them
class SmallDog: public Dog {
    int size;
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
