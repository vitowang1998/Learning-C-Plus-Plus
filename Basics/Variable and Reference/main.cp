// Variable and Reference

#include <iostream>

using namespace std;

// The recommanded C++ coding style is to declare a variable right before using it.

void testFunction(int& a, int&b)
{
    // The compiler would assign the integer 1 to the storage location to which is referred by reference "b".
    // Then the compiler would assign the integer 1 to the storage location referred to by reference "a".
    a = b = 1;
}

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
    // In essence, this defining declaration causes the compiler to allocate memory space to the memory location represented by the variable "var2" and assign the value of "var1" to this specific memory location.
    int var2 = var1;
    
    
    // Coding philosophy: "Use reference when you need to, pointer when you have to."
    
    // Pass by reference / Create a reference
    
    
    // A reference is an alias for another variable.
    
    // With this directive, we created a reference of variable "var1".
    // We are able to modify the reference and if we do so, the variable to which is referred by this reference would be modifed as well.
    
    
    // Speaking in terms of memory location, the reference "number" and the variable "var1" both refer to the same storage location in memory.
    
    
    // Syntax: if we want to declare a reference, we should add "&" after the data type.
    int& number = var1;
    
    number = 3;
    
    cout << number << "\n" << var1 << "\n";
    
    // When the variables are in different scopes (functions), reference can be extremely useful and effecient.
    // Before we know reference, we usually declare local variables in functions.
    // With reference, we can modify global variable in functions.
    
    
    
    
    
    
    // When a function expects strict reference type, we cannot
    
    
    
    return 0;
}
