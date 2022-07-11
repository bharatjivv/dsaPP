#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    bool result = 0;
    int ans = 0;
    int i = 0;

    int original = x;
    while(x!=0){
        int digit = x%10;
        ans = (digit * pow(10,i)) + ans;
        x = x/10;
        i++;
    }
    if(ans == original){
        result == 1;
    }
    
    cout << result;
     
}