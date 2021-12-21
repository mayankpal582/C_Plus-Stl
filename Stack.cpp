#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("Mayank");
    s.push("Vinay");
    s.push("Venu");
    cout << "Top Element :- " << s.top() << endl;
    s.pop();
    cout << "top element :- " << s.top() << endl;
    cout << "Size of stack :- " << s.size() << endl;
    cout << "Empty or not :- " << s.empty() << endl;
}
