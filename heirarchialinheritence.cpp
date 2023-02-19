#include <iostream>
using namespace std;

class A{
    public:
        void func(){
            cout << "Inside function 1 " << endl;
        }
};

class B : public A{
    public :
        void func2(){
            cout << "Inside function 2 " << endl;
        }
};

class C : public A{
    public:
        void func3(){
            cout << "Inside function 3 " << endl;
        }
};



int main(){
    cout << "Obj1 : " << endl;
    A obj1;
    obj1.func();
    
    cout << "Obj2 : " << endl;
    B obj2;
    obj2.func();
    obj2.func2();

    cout << "Obj3 : " << endl;
    C obj3;
    obj3.func();
    // obj3.func2();    // This will show error because C is a child of A not B hence it can't print func2
    obj3.func3();
    
} 