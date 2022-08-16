#include <iostream>
using namespace std;

void insertion(int n, vector<int> &arr){
    for(int i = 1; i < n; i++){
        int temp = arr[i];
        for(int j = i-1; j>= 0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];  // shift
            }
            else{
                break;      // ruk jao 
            }
        }
        arr[j+1] = temp;
    }

    
}

int main(){
    vector <int> arr;
    
    
}