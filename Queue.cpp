#include <iostream>
#include <queue>
using namespace std;
int main(){
     // Queue means first In first out.
     queue<string> q;
     q.push("shivayee");
     q.push("Singh");
     q.push("Obreoi");
     cout << "size before pop :- " << q.size() << endl;
     cout << "First Element :- " << q.front() << endl;
     q.pop();
     cout << "First Element :- " << q.front() << endl;
     cout << "size after pop :- " << q.size() << endl;
}