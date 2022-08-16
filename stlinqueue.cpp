#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<string> q;

    q.push("Love");
    q.push("Babbar");
    q.push("Kumar");

    cout << "Size before pop : " << q.size() << endl;

    cout << "First element : " << q.front() << endl;

    // First in first out principle
    q.pop();
    cout << "First element after q.pop() : " << q.front() << endl;

    // Size
    cout << "Size after pop : " << q.size() << endl;
}