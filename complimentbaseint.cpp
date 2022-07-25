#include <iostream>
#include <math.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    bool val = false;
    int ans = 0;
    for(int i = 0; i <=30; i++){
        ans = pow(2, i);
        if(ans == n){
            val = true;
        }
    }

    if(val){
        cout << "yaaaayyy";
    }
    else{
        cout << "Nayyyy";
    }

}