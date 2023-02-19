#include <iostream>
using namespace std;

void reverse(int i, int j, string& str){

    cout << "call recieved for : " << str << endl;
    
    // base case
    if(i>j)
        return ; 
    
    swap(str[i], str[j]);
    i++;
    j--;

    // Recursive call
    reverse(i , j, str);
}

int main(){
    string name = "llubder";
    
    reverse(0, name.length() - 1, name);

    cout << name << endl;
    
}