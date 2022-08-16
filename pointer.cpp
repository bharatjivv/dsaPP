// #include <iostream>
// using namespace std;

// int main(){
//     int num = 5;
//     int *abdul = &num;

//     cout << "abdul dabbe me bhara hua saaman : " << abdul << endl;
//     cout << "num ka address : " << &num << endl;
//     cout << "abdul jise point kar rhaa hai uspe value : " << *abdul << endl;
//     cout << "num ki value : " << num << endl;
//     cout << "abdul variable ka address : " << &abdul << endl;

//     double d = 4.5;
//     double *dobpointer = &d;

//     cout << "Value stored at dobpointer (address of double d ) : " << dobpointer << endl; 
//     cout << "Address of double d : " << &d << endl;
//     cout << "Value is (value kept at double d ) :  " << *dobpointer << endl;

//     cout << "Size of integer is : " << sizeof(num) << endl;
//     cout << "Size of abdul : " << sizeof(abdul) << endl;
//     cout << "Size of pointer is : " << sizeof(dobpointer) << endl;
    
// }



// #include <iostream>
// using namespace std;

// int main(){
//     // khaali pointer -> pointer to int is created and pointing to some garbage address
//     int *p = 0;
//     cout << *p << endl;
    
    
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int i = 5;
//     int *p = 0;
//     p = &i;

//     cout << p << endl;
//     cout << *p << endl;
    
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int num = 5;
//     int a = num; 
//     a++;

//     cout<< "a and num is - " << a << " : " << num << endl;
// }

#include <iostream>
using namespace std;
int main(){
    int num = 5;
    cout << "Value of num is : " << num << endl;
    int *p = &num;
    // int a = *p; 
    // a++;
    
    (*p)++;
    cout << "Value of num now is : " << num << endl;

    // copying a pointer
    int *q = p;
    cout << "p is " << p << endl;
    cout << "q is " << q << endl;

    cout << *p << ' ' << *q << endl;
    

    
}
