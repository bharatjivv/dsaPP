#include <iostream>
using namespace std;

class Hero{
    int health;
public:
    char Level;
    // Default constructor
    Hero (){
        cout << "Simple Constructor called " << endl;
    }
    // parameterized constructor
    Hero(int health){
        cout << "this ->" << this << endl;
        this -> health = health;
    }
    Hero(int health, char level){
        this -> Level = level;
        this -> health = health;
    }

    // copy constructor
    Hero(Hero &temp){
        this-> health = temp.health;
        this->Level = temp.Level;

    }
    void print(){
        cout << "health : " << this -> health << endl;
        cout << "Level : " << this -> Level << endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return Level;
    }
    
    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        Level = ch;
    }

    
};


int main(){

    Hero suresh(70, 'C');
    suresh.print();

    Hero ritesh(suresh);
    ritesh.print();

    /*
    // object created statically
    Hero bhai(10);
    cout << "Address of bhai : " << &bhai << endl;
    bhai.print();


    // dynamically 
    Hero *h = new Hero;
    h->print();

    
    Hero temp(22, 'B');
    temp.print();
    */


    /*
    // static allocation
    Hero a;
    a.setHealth(44);
    a.setLevel('c');
    cout << "Level is : " << a.Level << endl;
    cout << "Health is : " << a.getHealth() << endl;

    // Dynamic allocation
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(59);
    cout << "Level is : " << (*b).Level << endl;
    cout << "Health is : " << (*b).getHealth() << endl;

    cout << "Level is : " << b->Level << endl;
    cout << "Health is : " << b->getHealth() << endl;



    // ramesh.health = 70;
    // ramesh.Level = 'A';

    // Hero ramesh;
    // ramesh.setHealth(6);
    // ramesh.setLevel('B');
    
    // cout << "Size : " << sizeof(ramesh) << endl;
    
    // // cout << "Health is : " << ramesh.health << endl;
    // // cout << "Level is : " << ramesh.Level << endl;
    
    // cout << "Health of ramesh is : " << ramesh.getHealth() << endl;
    // cout << "Level of Ramesh is : " << ramesh.getLevel() << endl;
    
    */

}