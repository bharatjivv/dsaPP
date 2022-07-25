#include <iostream>
using namespace std;

void sortarr(int arr[], int size){
    int start = 0;
    int end = size -  1;
    while(start < end){
        if(arr[start] == 1 && arr[end]==0){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        else if (arr[start] == 0){
            start ++;
        }
        else if (arr[end] == 1){
            end --;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}



int main(){
    int arr[8] = {0, 1, 1, 1, 0, 0, 1, 0};
    int arr2[10] = {0, 1, 2, 2, 1, 0, 2, 1, 2,1};

    sortarr(arr, 10);

}