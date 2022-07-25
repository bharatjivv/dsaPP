#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}

void sortOnes(int arr[], int size){
    int low = 0;
    int mid = 0;
    int high = size-1;
    while(mid < high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid], arr[high]);
            mid++;
            high--;
        }
    }
}

int main(){
    int arr[10] = {1, 0, 1, 1, 2, 2, 2, 1, 0, 0};

    printArray(arr, 10);
    sortOnes(arr, 10);
    
    
}