#include <iostream>
// To use vector we have to use vector library.
#include <vector>
using namespace std;
int main(){
    // Vector is a dynamic array.
    // It create a new array if the size is full and put all those elements from previous array into a new array. 
    vector<int> v;
    // Capacity means total memory allocation.
    // size means no of current elements present in it
    cout << "capacity -> " << v.capacity() << endl;
    // To push element in a vector we use pushback() function.
    v.push_back(1);
    cout << "capacity -> " << v.capacity() << endl;
    v.push_back(2);
    cout << "capacity -> " << v.capacity() << endl;
    // When the size become full it create a double size of array
    v.push_back(3);
    cout << "capacity -> " << v.capacity() << endl;
    // To chek size of vector
    cout << "capacity -> " << v.size() << endl;
    // checking font and back element
    cout << "front element :- " << v.front() << endl;
    cout << "back element :- " << v.back() << endl;
    // If we use to clear a vector the size become 0 but not the capacity.
    cout << "size before clear :- " << v.size()<< endl;
    v.clear();
    cout << "size after clear :- " << v.size()<< endl;

}