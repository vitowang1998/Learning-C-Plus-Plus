//  Created by Haoran Wang on 2018-01-11.
//  Copyright © 2018 Haoran Wang. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {

  
    
    // push_back(i) -> put i to the top of the given vector
    // pop_back() -> returns the top element of the vector while removing it from the vector
    
    vector<int> v;
    
    
    
    for (int i = 0; i < 17; i++)
    {
        cout << "size = " << v.size() << ", " << "capacity = " << v.capacity() << endl;
        v[i] = i;
        v.push_back(i + 900);        cout << "currently adding value = " << v[i] << endl;
        cout << "size = " << v.size() << ", " << "capacity = " << v.capacity() << endl << endl;
        
    }
    
    

    while(v.size() != 0)
    {
        int i = v.back();
        cout << "popping " << i << endl;
        v.pop_back();
    }
    
    

    
    
    string month_name[12];
    month_name[0] = "January";
    month_name[1] = "February";
    month_name[11] = "youmeiyoua";
    
    cout << month_name[0] << " " << month_name[12] << endl;
    
    
    // this proves that the vector array can be arrenged by the commends of non-dynamic array (if it is already initilized by push_back(something);
    v[5] = 5;
    cout << v[5] << endl;
    

    
    return 0;
}





