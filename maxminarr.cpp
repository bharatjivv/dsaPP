#include <iostream>
using namespace std;

// void maxMin(int arr[], int size){
//     int maxNos = INT_MIN;
//     int minNos = INT_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] > maxNos){
//             maxNos = arr[i];
//         }
//         if(arr[i] < minNos){
//             minNos = arr[i];
//         }
//     }
//     cout << "Largest Nos is : " << maxNos << endl;
//     cout << "Smallest Nos is : " << minNos << endl;
// }

// int main(){
//     int arr[100];
//     cout << "Enter the size of array you want : ";
//     int size;
//     cin >> size;
    
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Enter " << i << "th element : ";
//         cin >> arr[i];
//     }
    
//     maxMin(arr, size);
// }


// Ultimate basic arrray queries

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; 
    }
    
}

int minArr(int arr[], int size){
    int smol = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] < smol){
            smol = arr[i];
        }
    }
    return smol;
}

int maxArr(int arr[], int size){
    int lorge = INT_MIN;
    for(int i = 0; i < size; i++){
        if (arr[i] > lorge)
        {
            lorge = arr[i];
        }
    }
    return lorge;
}

bool elemSearch(int arr[],int key, int size){
    for (int i = 0; i < size; i++)
    {
        if(key == arr[i]){
            return true;
        }
    }
    return false;    
}

void reverarr(int arr[], int size){
    int len = size - 1;
    for (int i = 0; i < len/2; i++)
    {
        swap(arr[i], arr[len-i]);
    }
    
    cout << "Reversed array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
}

int main(){
    int arr[100];
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Insert value for index " << i << " : ";
        cin >> arr[i];
    }

    cout << "Printed array is : ";
    printArray(arr, size);
    cout << endl;
    cout << "Minimum value in the array is : " << minArr(arr, size) << endl;
    cout << "Maximum value in the array is : " << maxArr(arr, size) << endl;

    int sorch;
    cout << "Enter the element you want to search : ";
    cin >> sorch;
    
    if(elemSearch(arr, sorch, size))
        cout << "The element you entered is present " << endl;
    else
        cout << "Naah its not there " << endl;


    cout << "After reversing the array : " << endl;
    reverarr(arr, size);


}