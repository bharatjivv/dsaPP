#include<iostream>
using namespace std;

void arreven(int arr[],int size){
    for(int i=0; i<size; i+=2)
    {
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArry(int arr[],int size){
    for(int i=0; i<size; i++){
        cout <<arr[i] << " ";
    }cout << endl;
}

int main(){

    int arr[8]={1, 2, 3, 4, 5, 6, 7, 8};

    printArry(arr, 8);
    arreven(arr,8);
    printArry(arr,8);

}