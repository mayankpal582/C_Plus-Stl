#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    // Let supose we have to use binary search
    vector<int> v;
    // Here we are pushing a element in a sorted order becuase it is a condition of binary search.
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    cout<< "Finding 5 " << binary_search(v.begin() , v.end(),5) << endl;
    cout << "Lower Bound " << lower_bound(v.begin(),v.end(),6) -v.begin() << endl;

    int a = 8;
    int b = 99;
    cout << "Max print :- " << max(a,b) << endl;
    cout << "Min print :- " << min(a,b) << endl;
    swap(a,b);
    cout << a << endl;
    string s = "mayankpal" ;
    reverse(s.begin() , s.end());
    cout << s ;





}