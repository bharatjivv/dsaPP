#include <iostream>
using namespace std;

int factorial(int n){
    // base
    if(n==0)
        return 1;
    
    // int chotti = factorial(n-1);
    // int badi = n * chotti;
    
    return n * factorial(n-1);
}

int main(){
    int n; 
    cout << "Program started : ";
    cin >> n;

    int ans = factorial(n);
    cout << ans << endl;

    return 0;
}