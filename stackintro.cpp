#include <iostream>
#include <stack>
using namespace std;

class Stack {
    public:
        int *arr;
        int top;
        int size;

    // behaviour
    Stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
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
        }
        else{
            cout << "Stack underflow" << endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){

    Stack st(5);

    st.push(22);
    st.push(33);
    st.push(44);
    st.push(22);
    st.push(33);
    st.push(44);

    cout << st.peek()<< endl;
    st.pop();
    cout << st.peek()<< endl;
    st.pop();
    cout << st.peek()<< endl;
    st.pop();

    cout << st.isEmpty();






















    /*
    // creation of stack
    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);

    // top element 
    cout << "Printing top element " << s.top() << endl;

    //pop operation
    s.pop();
    cout << "Printing top element " << s.top() << endl;

    if(s.empty()){
        cout << "Stack is empty ";
    }
    else{
        cout << "Stack is not empty ";
    }
    */

}