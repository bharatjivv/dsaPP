// STL deque
// Doubly ended queue
    // Dynamic 
    // Random access is possible 

#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for(int i: d){
        cout << i << " ";
    }
    cout << endl;
    // d.pop_back();   // Pops out the last element
    // d.pop_front();  // Pops out front element 

    for(int i: d){
        cout << i << " ";
    } 
    cout << endl;

    cout << "Print  the element at first index : " << d.at(1) << endl;
    cout << "Front of deque : " << d.front() << endl;
    cout << "Back of deque : " << d.back() << endl;

    cout << "Empty or not : " << d.empty() << endl;
    cout << "Before erase size : " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After erase size : " << d.size() << endl;
    for(int i:d){
        cout << i << endl;
    }
    
}