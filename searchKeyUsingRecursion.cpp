#include <iostream>
using namespace std;

void print(int arr[], int n){
    cout << "Size of array is : " << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
    
}

bool linearsearch(int arr[], int size, int k ){
    print(arr, size);
    // base case
    if(size == 0)
        return false;

    if(arr[0]==k)
        return true;

    else{
        bool remainingPart = linearsearch(arr+1, size-1, k);
        return remainingPart;
    }
    
}


int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int key = 5;
     
    bool ans = linearsearch(arr, size, key);

    if(ans){
        cout << "Present";
    }
    else{
        cout << "Absent";
    }



}