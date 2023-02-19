#include <iostream>
using namespace std;

int main(){
    int num = 5;
    int *p = &num;
    
    cout << "ADdress   of   num   is                  : " << &num << endl;
    cout << "Address of num through pointer is        : " << p << endl;
    
    cout << "Value   of   num   is                    : " << num << endl;
    cout << "Value of num through pointer is          : " << *p << endl;
    
    cout << "Address of pointer is                    : " << &p << endl;
    
    
    
    double d = 4.3;
    double *p2 = &d;
    cout << "Address where value kept is              : " << &d << endl;
    cout << "Add. where value kept through pointer is : " << p2 << endl;
    cout << "Value is                                 : " << d << endl;
    cout << "Value through pointer is                 : " << *p2 << endl;
    
    cout << "SIZE OF " << endl;
    
    cout << "Size of integer is                       : " << sizeof(num) << endl;
    cout << "Size of pointer pointing to integer is   : " << sizeof(p) << endl;
    
    cout << "Size of double is                        : " << sizeof(d) << endl;
    cout << "Size of pointer pointing to double is    : " << sizeof(p2) << endl;
    
    
}