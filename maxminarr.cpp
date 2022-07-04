#include <iostream>
using namespace std;
void maxMin(int arr[], int size){
    int maxNos = INT_MIN;
    int minNos = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxNos){
            maxNos = arr[i];
        }
        if(arr[i] < minNos){
            minNos = arr[i];
        }
    }
    cout << "Largest Nos is : " << maxNos << endl;
    cout << "Smallest Nos is : " << minNos << endl;
}

int main(){
    int arr[100];
    cout << "Enter the size of array you want : ";
    int size;
    cin >> size;
    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i << "th element : ";
        cin >> arr[i];
    }
    
    maxMin(arr, size);
}