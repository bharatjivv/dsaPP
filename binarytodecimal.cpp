#include <iostream>
#include <math.h>
using namespace std;

int main(){
    // cout << (5&7) << endl;
    // cout << (5|7) << endl;
    // cout << ~5 << endl;
    // cout << ~7 << endl;
    // cout << (5^7)<< endl;

    int n;
    int ans = 0;
    cin >> n;
    int i = 0;
    while (n!=0)
    {
    int bit = n&1;
    n = n >> 1;
    ans = (bit*pow(10,i))+ ans;
    i++;
    }
    cout << ans;
}
