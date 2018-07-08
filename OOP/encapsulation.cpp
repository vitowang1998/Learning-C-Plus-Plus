// Encapsulation

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

}
