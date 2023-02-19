#include <iostream>
using namespace std;

void print(int *p){
    // cout <<"Address of pointed space : " << p << endl;
    cout << "Value at pointed space : " << *p << endl;
}

void update(int *p){
    p = p + 1;
    // cout << "Value of p inside update function : " << p << endl;
    *p = *p + 1;

}

int getSum(int arr[], int n){

    cout << endl <<"Size : " << sizeof(arr) << endl;

    int sum = 0; 
    for(int i=0; i<n; i++){
        sum+= arr[i];
    }
    
    return sum;
}

int main(){

/*      
    int value = 5;
    int *p = &value;
    
    cout << "Before " << p << endl;
    cout << "Before value : " << *p << endl;
    print(p); 
    update(p);
    cout << "After " << p << endl;
    cout << "After value : " << *p << endl;
*/


    int arr[5] = {1, 2, 3, 4, 5};
    cout << getSum(arr, 5) << endl;

}