#include <iostream>
// First we have to include a library of deque
#include <deque>
using namespace std;
int main(){
    // Deque means insertion or deletion can be possible from front as well as back.
    // It is dynamic also and random access is also possible.
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    // for(int i:d){
    //     cout << i << " " ;
    //     cout << endl;
    // }
    // d.pop_back();
    // for(int i:d){
    //     cout << i << " ";
    // }
    cout << "print first index element -> " << d.at(1) << endl; 
    cout << "front " << d.front() << endl;
    cout << "back " << d.back() << endl; 
    cout << "Empty or not " << d.empty() << endl;
    
    
}