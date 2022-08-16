#include <iostream>
using namespace std;

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    /*
    int *ptr = &arr[0];
    cout << sizeof(arr) << endl;
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;
    */
   
    /*
    cout << "Address of first memory block is : " << arr << endl;
    cout << arr[0] << endl;
    cout << "Address of first memory block is : " << &arr[0] << endl;
    
    for(int i=0; i<10; i++){
        cout << arr[i] << " :   arr[i]" << endl;
        cout << *(arr+i) << " : *(i+arr)" << endl;
        cout << i[arr] << "  : i[arr] " << endl;
        cout << *(i+arr) << " : *(i+arr)" << endl;
    }
    */
/*  
   cout << &arr[0] << endl;
   cout << &arr << endl;
   cout << arr << endl;
*/

  // Character arrays 
   int arr2[5] = {1, 2, 3, 4, 5};
   char ch[6] = "abcde";

   cout << arr2 << endl;
   cout << ch << endl;
    // arr2 me address print hogya lekin ch me saare elements print hogye

    cout << "array ke case me aur character ke case me alag implementation rakhta hai " << endl;

    char *c = &ch[0];
    // prints entire string 
    cout << c << endl;

    char temp = 'z';
    char *p = &temp;
    cout << temp;
    cout << p << endl;
     
}