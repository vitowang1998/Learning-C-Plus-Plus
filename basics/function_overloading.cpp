// Function overloadding refers to a situation where two functions share the same 
//  name but take in different parameters.

// Clarely, this design will add to the variety of c++.

#include <iostream>

using namespace std;

void eat(int a) {
    cout << "The person decides to eat " << a << "pounds of food today." << endl;
}

void eat (string s) {
    cout << "The person decides to eat " << s << "today." << endl;
}

int main(int argc, const char* args) {

}