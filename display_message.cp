// Display a message

// Generally speaking, a preprocessor is a program that make changes to your main program before it goes to the processor.
// There is a form of C++ processor which works by translating C++ codes to C. Since it makes changes to the codes before it goes to the processor, by definition, it is also a kind of preprocessor.

// Typically, the preprocessor in C++ deals with the codes start with #, such as "#include <iostream>".
// "#include <iostream>" would add the contents in the file "iostream" along with the contents of our file (the codes)


// In essence, the contents of the "iostream" file would replace the line "#include <iostream>".

// Our original file is not modified, but a composite file of the contents in "iostream" and our original codes are sent to the next part of the compilation.

// Specifically, you need to write "#include <iostream>" to enable the "cin" and "cout" facilities.


// Old C style adds .h at the end of libraries.  Eg. <math.h>
// Old C++ style also adds .h at the end of libraries.  Eg. <iostream.h>
// They are changed into <iostream> and <cmath> accordingly


// For older compilers, we use "#include <iostream.h>"


# include <iostream>




// In C++, it is possible for us to have some pre-existing codes from various sources.

// In this case, it would cause problems as long as we have different functions with a same name.

// Consequently, we need a "using directive" to enable the functions in that namespace.

// When we use cin and cout, we are actually using the cin and cout function in the namespace "std"

// If we do not want to write the using directive, we can say std::cin and std::cout to use the cin and cout function.

// If we only want to use 1 or 2 functions in a namespace, we can write the codes like this:

/*
 using std::cout;
 using std::cin;
 using std::endl;
 */


using namespace std;    // This line would enable all the functions in the namespace std





int main(){
    
    cout << "Hello, world!";
    
    
    // Endl is specifically defined and it is only meaningful under the object "cout"
    // which is to say, "endl" is actually a method of object "cout".
    // Such directive like "endl" is called a "dubbed manipulator"
    // "endl" is defined in the "iostream" header file and is part of "std" namespace.
    
    cout << endl;
    
    
    cin.get();
    
    
    return 0;
}
