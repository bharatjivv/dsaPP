// Set har element ko ek hi baar store karta hai
// Implementation through BST 
// Sorted element me return hote hai element
// Unordered set me element randomly fetch hoke aate hain 

#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);


    for(int i : s){
        cout << i;
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for(auto i : s){
        cout << i;
    }cout << endl;


    cout <<"5 is present or not : " << s.count(5) << endl;

    set <int>::iterator itr = s.find(5);

    
    for(auto it=itr; it!=s.end(); it++){
        cout << *it << " ";
    }cout << endl;
    
}
