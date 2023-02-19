#include <iostream>
using namespace std;

void print(int arr[], int s, int e){
    for(int i=s; i <=e; i++){
        cout << arr[i] << " ";
    }cout << endl;
}

bool binarySearch(int *arr, int s, int e, int k){
    cout << endl;
    print(arr, s, e);
    // base case
    if(s > e)
        return false;
    
    int mid = s + (e-s)/2;
    // cout << "Value of arr mid is : " << arr[mid];
    if(arr[mid] == k)
        return true;

    if(arr[mid] < k){
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}

int main(){
    int arr[6] = {2, 4, 6, 10, 14, 18};
    int size = 6;
    int key = 18;

    cout  << "Present or not : " << binarySearch(arr, 0, 5, key) << endl;

}