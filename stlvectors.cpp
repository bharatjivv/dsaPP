// STL vectors 
// Vector is a dynamic array 
// Jab hum vector me size se zyada element bhar dete hai to vector ek khud se double size ka naya vector banata hai. Usme purane saare elements copy karta hai aur purane waale vector ko dump kar deta hai. Isse hume aur space mil jaati hai elements store karne ke lie.
// Vector ko clear karte time vector ka size 0 hota hai uski capacity 0 nahi hoti hai i.e. sirf vector ke andar ke elements 0 hojaynge

#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    // How to initialize array when size is not defined before
    vector<int> v;

    // How to initialize array with predefined values and size (This will initialize an array of size 5 with all the values set to 1)
    // By default all the values are set to zero if we donot set the predefined values 
    vector<int> a(5, 1);
    cout << "Print a : " << endl;
    for(int i:a){
        cout << i << " ";
    }
    cout << endl;
    
    // Creating an array and copying the elements of another array in it 
    vector<int> copyofa(a);

    for(int i:copyofa){
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Capacity of vector : " << v.capacity() << endl;
    
    v.push_back(1);
    cout << "Capacity of vector : " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity of vector : " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity of vector : " << v.capacity() << endl;
    
    cout << "Size of vector : " << v.size() << endl;
    cout << "Element at 2nd index : " << v.at(2) << endl;
    
    cout << "Front : " << v.front() << endl;
    cout << "Back : " << v.back() << endl;
    
    cout << "Before pop : " << endl;
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "After pop : " << endl;

    for(int i:v){
        cout << i << " ";
    }
    cout << endl;


    cout << "Before clearing the size of the vector : " << v.size() << endl;
    v.clear();
    cout << "After clearing the size of the vector : " << v.size() << endl;


}