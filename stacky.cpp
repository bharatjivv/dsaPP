#include <iostream>
#include <stack>
using namespace std;

class Stack{
    public: 
    int *arr;
    int top;
    int size;

    // behaviour
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack overflow " << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }else{
            cout << "Stack underflow " << endl;
        }
    }

    int peek(){
        if(top >= 0 && top < size){
            return arr[top];
        }else{
            cout << "Stack is empty " << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }

};

int main(){

    Stack st(5);
    
    st.push(22);
    st.push(43);
    st.push(44);
    
    cout << st.peek() << endl;

    st.pop();

    if(st.isEmpty()){
        cout << "Stack is empty " << endl;
    }else{
        cout << "Stack isn't empty " << endl;
    }
    
    
    
    
    
    
    
    
/*    
    stack<int> stck;
    int i = 0;

    while(i<5){
        stck.push(i);
        i++;
    }

    for(int i = 0; i < 8; i++){
        
        if(stck.empty()){
            cout << "Size of stack : " << stck.size() << endl;
            cout << "String empty " << endl;
            break;
        }else{
            cout << "Size of stack : " << stck.size() << endl;
            cout << stck.top() << " " << endl;
            stck.pop();
        }

    }
*/


}