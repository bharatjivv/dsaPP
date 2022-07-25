#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertElements(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value for " << i << " position : ";
        cin >> arr[i];
    }
}

// void reverseAlternate(int arr[], int size){

//     for (int i = 0; i < size; i= i + 2)
//     {
//         if(i+1 < size){
//             swap(arr[i], arr[i+1]);
//         }
//     }
//     cout << endl;
//     printArray(arr, 5);
// }

void reverseAlternate(int arr[], int size){
    for (int i = 0, j = i + 1; i < size, j < size; i = i + 2, j = j + 2)
    {
        swap(arr[i], arr[j]);
    }
    cout << endl;
    printArray(arr, size);
}

int main(){
    int arr[5];
    int arr2[6];
    
    // insertElements(arr, 5);
    // printArray(arr, 5);
    // reverseAlternate(arr, 5);

    insertElements(arr2, 6);
    printArray(arr2, 6);
    reverseAlternate(arr2, 6);


}