#include <iostream>
using namespace std;

int partition()


void quickSort(int arr[], int s, int e){
    // base case
    if(s >= e)
        return ;
    
    // partition karenge
    int p = partition(arr, s, e);

    // left part sort karenge
    quickSort(arr, s, p-1);

    // right part sort karenge
    quickSort(arr, p+1, e);
    
}

int main(){

    
}