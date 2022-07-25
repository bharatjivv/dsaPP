// STL in C++

#include <iostream>
#include <array>
using namespace std;

int main(){
    int basicarr[3] = {1,2,3};

    array<int,4> stlarrey = {1, 2, 3, 4};
    int size = stlarrey.size();

    for(int i = 0; i <size; i++){
        cout << stlarrey[i] << endl;
    }


    cout << "Element at 2nd index is " << stlarrey.at(2) << endl;
    cout << "Array is empty or not : " << stlarrey.empty() << endl;

}
// Binary search ka code pura khud likhe
// Yaa fir ek hi line se binary search ki functionality puri hojaygi
// Sorting me quick sort, merge sort ka pura code khud likho yaa fir
// Ek sort function STL wala use krle 

/*
Two things to discuss in C++ STL 
1. Algorithms 
2. Containers -> Pre-built Data Structures
    a. Sequence Containers
    b. Container adapters
    c. Associating containers
    d. Unordered associative

*/  