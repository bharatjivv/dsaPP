#include <iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout << "Heloo love babbar " << endl;
    }

    void sayHello(string name){
        cout << "Hello " << name << endl;
    }
};

int main(){
    A obj;
    obj.sayHello();
    
    
    
}