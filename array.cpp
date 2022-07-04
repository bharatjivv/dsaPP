#include <iostream>
using namespace std;

// int main(){
//     int number[15];
//     for (int i = 0; i <= 15; i++)
//     {
//         cout << "Value at " << i << " index of array is : " << number[i] << endl;
//     }
// }

void printArray(int arr[], int size);

int main(){
    int nos[3] = {15, 23, 11};
    printArray(nos, 3);

}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << "Value at " << i << " is " << arr[i] << endl;
    }
}
