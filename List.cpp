#include <iostream>
#include <list>
using namespace std;
int main(){
    // doubly linkedlist ka used karke list stl banaya gya hai.
    // direct access is not possible.
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    for(int i :l){
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout << "after erase " << endl;
    for(int i :l){
        cout << i << endl;
    }

    cout << "size of list " << l.size() << endl;

}