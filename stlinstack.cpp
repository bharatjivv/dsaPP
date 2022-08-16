// Stack in STL
// Shaadi ki plates -> LIFO (Last In First Out) Principle

#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> s;

    s.push("Love");
    s.push("Babbar");
    s.push("Kumar");

    cout << "Top Element : " << s.top() << endl;

    // Popped out last element 
    s.pop();
    
    cout << "Top Element : " << s.top() << endl;
    cout << "Size of stack : " << s.size() << endl;
    
    cout << "Empty or not : " << s.empty() << endl;
}