#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;

    int mid = (start + end)/2;

    while(start <= end){
        if (arr[mid] == key){
            return mid;
        }
        if (key > arr[mid]){
            // Go to right part
            // Jab right part me jana ho to start = mid + 1 kardo
            start = mid + 1;
        }
        if (key < arr[mid]){
            // Go to left part
            // Jab left part me jana ho to end = mid - 1 kardo 
            end = mid - 1;
        }
        mid = start + (end-start)/2;
        // mid = (start + end)/2;
    }

    return -1;
}

int main(){

    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int index = binarySearch(even, 6, 2);
    cout << "Index of 2 is : " << index <<  endl;
    index = binarySearch(even, 6, 4);
    cout << "Index of 4 is : " << index <<  endl;
    index = binarySearch(even, 6, 6);
    cout << "Index of 6 is : " << index <<  endl;
    index = binarySearch(even, 6, 8);
    cout << "Index of 8 is : " << index <<  endl;
    index = binarySearch(even, 6, 12);
    cout << "Index of 12 is : " << index <<  endl;
    index = binarySearch(even, 6, 18);
    cout << "Index of 18 is : " << index << endl;

    index = binarySearch(odd, 5, 3);
    cout << "Index in odd array of 3 is : " << index << endl;
    index = binarySearch(odd, 5, 8);
    cout << "Index in odd array of 8 is : " << index << endl;

    index = binarySearch(odd, 5, 11);
    cout << "Index in odd array of 11 is : " << index << endl;

    index = binarySearch(odd, 5, 14);
    cout << "Index in odd array of 14 is : " << index << endl;

    index = binarySearch(odd, 5, 16);
    cout << "Index in odd array of 16 is : " << index << endl;


}