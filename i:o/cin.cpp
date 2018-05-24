#include <iostream>
#include <string>

using namespace std;



int main() {
    
    char str2[50];
    // getline stops at at new line character
    cin.getline(str2, 50);
    cout << str2 << endl;
    
    
    string str;
    // cin stops at any whitespace (newline char, space, tab, vertical tab)
    cin >> str;
    cout << str << endl;
    
}
