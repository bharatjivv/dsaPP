// STL Lists 
#include <iostream>
#include <list>

using namespace std;
int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout << i <<" ";
    }
    cout << endl;

    l.erase(l.begin());
    cout << "After erase : " << endl;
    for(int i:l){
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of list " << l.size() << endl;
    
    // Copying list 
    list<int> copiedlistofl(l);
    cout << "Printing copied list of l : ";
    for(int i: copiedlistofl){
        cout << i << " ";
    }
    cout << endl;
    // Creating a list of 5 size and inserting value 100 in each of it
    list<int> n(5, 100);

    cout << "Printing n : ";
    for(int i : n){
        cout << i << " ";
    }
    
}  