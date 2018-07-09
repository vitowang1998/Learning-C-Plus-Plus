// Polymorphism

#include <iostream>

using namespace std;

class SuperClass {
    // member variables
    // instanceVar1 and instanceVar2 are private, hence SubClass cannot access them.
    int instanceVar1;
    int instanceVar2;
    
protected:
    // protected integer instanceVar4 can be accessed by SubClasses
    // Be cautious when use protected. It destroys encapsulation.
    int instanceVar4;
    
public:
    // constructor
    SuperClass(int a, int b, int c): instanceVar1{a}, instanceVar2{b}, instanceVar4{c} {}
};


// Inheritance: Every instance of SubClass has the member variables and methods from SuperClass
class SubClass: public SuperClass {
    // member variables
    int instanceVar3;
    
public:
    // constructor
    // use the constructor of SuperClass to assign the value of instanceVar1 and instanceVar2
    SubClass(int a, int b, int c, int d): SuperClass{a, b, c}, instanceVar3{d} {}
};


int main() {
    // create an instance of SubClass via constructor of SubClasses
    SubClass subInstance{1, 2, 3, 4};
    
    // Object coercion/ Object Slicing
    // Since superInstance has less information than subInstance, the extra part of subInstance is not considered as part of superInstance.
    SuperClass superInstance = subInstance; // (default version of) copy constructor is called
    
    // However, this case is different.
    // With the following command, object slicing will not occur since we did not call the copy construtor.
    // With *superInstance2, we can only access the field of SuperClass in the instance of SubClass
    SuperClass *superInstance2 = new SubClass{5, 6, 7, 8};
    
    // Note that it can be extremely dangerous when we have an array of polymorphized objects. Hence if we want similar behavior, we should use an array of pointers, instead of actual objects.
}
