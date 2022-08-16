#include <iostream>
using namespace std;

void print(int *p){
    cout <<"Address of pointed space : " << p << endl;
    cout << "Value at pointed space : " << *p << endl;
}

void update(int *p){
    p = p + 1;

}

int main(){
    int value = 5;
    int *p = &value;
    
    cout << "Before " << p << endl;
    print(p); 
    update(p);
    cout << "After " << p << endl;

}