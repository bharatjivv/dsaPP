#include <iostream>
using namespace std;
/*
void update (int **p){
    // p = p + 1;
    // Kuch change hoga ? -     no  

    *p = *p + 1; 
    // Kuch change hoga ?   -   yes

    **p = **p + 1;
    // Kuch change hoga ? -   yes
}
*/

void update(int *p){
    *p = (*p) * 2;
}

void increment (int **p){
    ++(**p);
}
int main(){
    // int i = 5;
    // int *p = &i;
    // int **p2 = &p;

/*      
    cout << "Sab sahi chal raha hai " << endl;
    cout << "Printing P : " << p << endl;
    cout << "Add of P : " << &p << endl;

    cout << "Value at P2 (which is address of p) : " << p2 << endl;

    cout << "Value of i : " << i << endl;
    cout << "Value of i through p : " << *p << endl;
    cout << "Value through p2 : " << **p2 << endl;

    cout << "Printing value at P through different methods : "<< endl;
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;

    cout << "Printing value at P2 through different methods : " << endl;
    cout << &p << endl;
    cout << p2 << endl;
*/ 


/*
    cout << "Before : " << i << endl;
    cout << "Before : " << p << endl;
    cout << "Before : " << p2 << endl;
    update(p2);
    cout << "AFter : " << i << endl;
    cout << "AFter : " << p << endl;
    cout << "AFter : " << p2 << endl;
*/

/*  
    int first = 8;
    int second = 19;
    int *ptr = &second;

    *ptr = 9;
    cout << "First : " << first << " second : " << second << " ptr : " << ptr << endl;
*/

/*  
    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first << endl;
*/

/*
    int first = 0;
    int *p = &first;
    cout << (*p)++ << " "; 
    cout << first << endl;
*/

/*  
    int first = 8;
    int second = 11;
    int *third = &second;
    first = *third;
    *third = *third + 2;
    cout << first << " " << second << endl;
*/

/*  
    float f = 12.5;
    float p = 21.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p << endl;
*/


/*  
    int arr[5];
    int *ptr;
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;
*/

/*  
    int arr[] = {11, 21, 13, 14};
    cout << *(arr) << " " << *(arr + 1) << endl;
*/

/*  
    int arr[6] = {11, 21, 31};
    cout << arr << " " << &arr << endl;
*/

/*
    int arr[6] = {11, 21 , 31};
    int *p = arr;
    cout << p[2] << endl;
*/

/* 
    int arr[] = {11, 21, 31, 41};
    int *ptr = arr++;
    cout << *ptr << endl;
*/

/* 
    char arr[] = "abcde";
    char *p = &arr[0];
    p++;
    cout << p << endl;
*/

/*
    int i = 10;
    update(&i);
    cout << i << endl;
*/

/*
    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second << endl;
*/

/*
    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout << first << " " << second << endl;
*/

    int num = 110;
    int *ptr = &num;
    increment(&ptr);
    cout << num << endl;


}

