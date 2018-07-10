// Inheritance

// Single inheritance: inherit directly from ONLY ONE super class

#include <iostream>

using namespace std;

class SuperClass {
    // member variables
    int instanceVar1;
    int instanceVar2;
    
public:
    // constructor
    SuperClass(int a, int b): instanceVar1{a}, instanceVar2{b} {}
};


// Inheritance: Every instance of SubClass has the member variables and methods from SuperClass
class SubClass: public SuperClass {
    // member variables
    int instanceVar3;
    
public:
    // constructor
    // use the constructor of SuperClass to assign the value of instanceVar1 and instanceVar2
    SubClass(int a, int b, int c): SuperClass{a, b}, instanceVar3{c} {}
};


int main() {

}
