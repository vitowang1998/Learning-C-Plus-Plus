// Virtual

#include <iostream>

using namespace std;

class Dog {
    int size;
    int age;
    string color;
    
public:
    // By defining the method as virtual, we can call the methods in subclasses through pointers to subclass objects.
    virtual void bark() const {
        cout << "The dog barks" << endl;
    }
};

class SmallDog: public Dog {
    int size;
    int age;
    string color;
    
public:
    void bark() const override {
        cout << "bark! bark!" << endl;
    }
};

class BigDog: public Dog {
    int size;
    int age;
    string color;
    
public:
    void bark() const override {
        cout << "Wolf! Wolf!" << endl;
    }
};
        
class Husky: public Dog {
    int size;
    int age;
    string color;
    
public:
    void bark() const override {
        cout << "Husky: Wolf! Wolf!" << endl;
    }
};

int main() {
    // The virtual method doesn't make a difference when we have normal objects
    Dog Dog1;
    Dog1.bark();
    
    SmallDog Dog2;
    Dog2.bark();

    BigDog Dog3;
    Dog3.bark();
    
    Husky Dog4;
    Dog4.bark();
    
    
    // The virtual method doesn't make a difference when we have pointers to normal objects
    Dog *Dog5 = new Dog;
    Dog5->bark();
   
    SmallDog *Dog6 = new SmallDog;
    Dog6->bark();
    
    BigDog *Dog7 = new BigDog;
    Dog7->bark();
    
    Husky *Dog8 = new Husky;
    Dog8->bark();
    
    
    
    // Here is where polymorphism comes into play
    SmallDog Dog9; // declare a SmallDog object
    Dog *Dog10 = &Dog9; // use a general Dog pointer to point to the SmallDog object
    Dog9.bark(); // the method for SmallDog is called
    Dog10->bark(); // the method for SmallDog is called
    
    // This case is similar
    BigDog Dog11; // declare a BigDog object
    Dog &Dog12 = Dog11; // use a general Dog reference to refer to the BigDog object
    Dog11.bark(); // the method for BigDog is called
    Dog12.bark(); // the method for BigDog is called
    
}
