#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[size];
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i << "th element : ";
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Inserted array is : " ;
    for (int i = 0; i < size; i++)
    {
    cout << arr[i]<<" ";
    }
    cout << endl;
    cout << "sum of the array is : " << sum << endl;
    
}