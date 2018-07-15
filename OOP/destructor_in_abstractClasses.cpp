// Pure Virtual Methods

#include <iostream>

using namespace std;

class Dog {
    int size;
    int age;
    string color;
    
public:
    // Pure virtual method
    virtual ~Dog() = 0; // If we want the class to be inherited, we need to set the destructor to virtual MANUALLY
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
