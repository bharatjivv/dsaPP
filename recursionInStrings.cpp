#include <iostream>
using namespace std;

void reverse(string& str, int i, int j){
    cout << "Call recieved for : " << str << endl;

    // base case
    if(i>j)
        return ;
    
    swap(str[i], str[j]);
    i++;
    j--;

    reverse(str, i, j);
}

int main(){
    // inp -> A B C D E 
    // output -> E D C B A
    string name = "babbar";
    cout << endl;
    reverse(name, 0, name.length()-1);
    cout << name << endl;

    
}