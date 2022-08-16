#include <iostream>
using namespace std;
int sumArr(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}




int main(){
    int arr[] = {1, 7, 3, 6, 5, 6};
    int sum = sumArr(arr, 6);

    int lsum = 0;
    int rsum = sum;

    for(int i = 0; i < 6; i++){
        rsum -= arr[i];
        if(lsum == rsum){
            cout << "Pivot is at : " << i;
        }
        lsum += arr[i];
    }

}