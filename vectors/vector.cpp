// Vector

#include <iostream>
#include <vector>
#include <string>
using namespace std;


// The essence of vectors are containers. Vectors contain objects.
// Vectors can be considered as dynamic arrays.


// Vector is not a type, vector is a template class.
// The compiler generates (instantiates) the needed class by the information we passed


int main(int argc, const char * argv[]) {
    
    
    
    // push_back(i) -> put i to the end of the given vector
    // pop_back() -> returns the end element of the vector while removing it from the vector
    
    // vector is a template class
    // compiler instantiates a int vector class
    // v stores objects of int
    vector<int> v;
    
    
    
    // Adding values to a vector<int>
    for (int i = 0; i < 17; i++)
    {
        cout << "size = " << v.size() << ", " << "capacity = " << v.capacity() << endl;
        
        v.push_back(i);        cout << "currently adding value = " << v[i] << endl;
        cout << "size = " << v.size() << ", " << "capacity = " << v.capacity() << endl << endl;
        
    }
    
    
    
    // Removing values from the vector
    while(v.size() != 0)
    {
        int i = v.back();
        cout << "popping " << i << endl;
        v.pop_back();
    }
    
    
    
    // this proves that the vector array can be arrenged by the commends of non-dynamic array (if it is already initilized by push_back(something);
    v[5] = 5;
    cout << v[5] << endl;
    
    
    
    return 0;
}

