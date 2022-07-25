#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int val = 0;
    while(n!=0){
        int bit = n&1;
        n = n >> 1;
        cout << bit;
        if (bit==1){
            val++;
        }
        else{
            continue;
        }
    }
    cout << endl;
    cout << "Value of val : " << val << endl;
    
    
    if (val == 1)
    {
        cout << "Power of two";
    }
    else{
        cout << "Not a power of two";
    }
    

}