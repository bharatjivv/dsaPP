#include <iostream>
using namespace std;

class Animal{
    public:
        int age;
        int weight;

    public:
    void bark(){
        cout << "barking " << endl;
    }
};

class Human{
    public:
        string color;
    
    public:
    void speak(){
        cout << "Speaking " << endl;
    }
};

// Multiple inheritence
class Hybrid: public Animal, public Human{

};


int main(){
    Hybrid obj1;
    obj1.speak();
    obj1.bark();


}