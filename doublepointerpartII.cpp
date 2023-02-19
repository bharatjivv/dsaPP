#include <iostream>
using namespace std;

int main(){
    int i = 5;
    int* p = &i;
    int** p2 = &p;
    
    cout << endl << endl << "Sab changa sii : " << endl << endl;
    
    cout << "Printing value of i                    : " << i << endl;
    cout << "Printing value of i through p pointer  : " << *p << endl;
    cout << "Printing vlaue of i through p2 pointer : " << **p2 << endl;
    
    
    cout << endl;
    cout << "Printing address of i            : " << &i << endl;
    cout << "Printing address of i through p  : " << p << endl;
    cout << "Printing address of i through p2 : " << *p2 << endl; 
    
    cout << endl;
    cout << "Printing value at p            : " << p << endl;
    cout << "Printing value at p through p2 : " << *p2 << endl;
    
    cout << endl;
    cout << "Printing address of p            : " << &p << endl;
    cout << "Printing address of p through p2 : " << p2 << endl;
}