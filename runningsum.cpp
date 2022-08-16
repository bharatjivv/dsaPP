#include <iostream>
using namespace std;

void runningnums(int arr[], int size){
    int sizee = size;
    for(int i = 1; i < sizee; i++){
        arr[i] = arr[i] + arr[i-1];
    }
    
}

int main(){
    int arr[5] = {1, 1, 1, 1, 1};

    runningnums(arr, 5);
    
    for(int i = 0; i<5; i++ ){
        cout << arr[i] << " ";
    }
}