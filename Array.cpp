#include <iostream>
// For Array stl we have used to library
#include <array>
using namespace std;
int main(){
    // Normal Array
    int basic[3] = {1,2,3};

    // Array stl
    // Implementation of array stl only can be done through normal array 
    array<int , 4> a =  {1,2,3,4};
    // Finding size in array stl
    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
    // Finding element at 2nd index in array stl
    cout << "Element at 2nd index is " << a.at(2) << endl;
    cout << "Empty or not :- " << a.empty() << endl;
    cout << "Element at front" << a.front() << endl;
    cout << "Element at last" << a.back() << endl;
    
    

}