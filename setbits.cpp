#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans = 0;
    int i = 0, val = 0;
    while(n!=0){
        int bit = n & 1;
        if(bit == 1){
            val++;
        }
        n = n >> 1;
        i++;
    }
    
    if(val == 1){
        cout << "It is power of 2";
    }
    else{
        cout << "No it isn't ";
    }

}
