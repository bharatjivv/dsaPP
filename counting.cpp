#include <iostream>
using namespace std;

void print(int n){
    // base case
    if(n==0)
        return ;
            
    // Recursive Relation
    print(n-1);

    cout << n << " ";

}

int main(){
    int n;
    cin >> n;
    print(n);

}