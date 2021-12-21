#include <iostream>
#include <set>
using namespace std;
int main(){
    // Set always stored unique elements.
    // Implementation of Set behind scene can be done only through bst.
    // Modification can not be done.
    set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(2);
    s.insert(7);
    s.insert(4);
    s.insert(9);
    s.insert(5);
    s.insert(00);
    for (auto i :s){
        cout << i << endl;        
    }
    
}