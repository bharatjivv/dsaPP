#include <iostream>
using namespace std;

class Animal{
    public:
        int age;
        int weight;

    public:
        void speak(){
            cout << "speaking " << endl;
        }
        void sayage(){
            cout << "Age is : " << this-> age << endl;
        }
};

class Dog : public Animal{

};

class German : public Dog{

};

int main(){
    German g;
    g.speak();
    
    
    
    /*
    Dog d;
    d.age = 5;

    d.speak();
    d.sayage();
    */
}