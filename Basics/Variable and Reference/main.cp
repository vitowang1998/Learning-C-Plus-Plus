// Variable and Reference

#include <iostream>

using namespace std;

// The recommanded C++ coding style is to declare a variable right before using it.



int main()
{
    // Declaration statement
    
    // In C++, there are two ways to declare a variable. The first is called "defining declaration". The directive "int var1" is called a "defining declaration statement".
    
    // A declaration will cause the compiler to create a variable in which it can store a data (an integer in this case).
    // In essence, the defining declaration causes the compiler to allocate memory space for the variable.
    int var1;
    
    
    // With this directive, the compiler would assign the integer "1" to the memory location represented by the variable "var1".
    var1 = 1;
    
    
    
    
    // The complier would create a variable called "var2" in which it can store an integer.
    // In essence, this defining declaration causes the compiler to allocate memory 
    int var2 = var1;
    
    
    // Coding philosophy: "Use reference when you need to, pointer when you have to."
    
    // Pass by reference / Create a reference
    // With this directive, we created a reference of variable "var1".
    
    
    
    int& number = var1;
    
    number = 3;
    
    cout << number << "\n" << var1 << "\n";
    
    
    
    return 0;
}
