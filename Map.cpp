#include <iostream>
#include <map>
using namespace std;
// There is sorted in case of map.
// And in a case of un-ordered map there is unsorted
int main(){
    map<int,string>  m;
    m[1] = "shivayee";
    m[2] = "Singh";
    m[13] = "Obreoi";
    m.insert({5,"roy"});
    cout << "before erase " << endl;
    for(auto i:m){
        cout << i.first<< " " << i.second<< endl;
    } 
    cout << "finding 13 -> " << m.count(13) << endl;
    m.erase(13);
    cout << "after erase " << endl;
    for(auto i:m){
        cout << i.first<< " " << i.second<< endl;
    } 
}