#include <iostream>
using namespace std;

// // Pattern - 1
// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//     while (i<=n){
//         int j = 1;
//         while (j<=n){
//             cout<< "* ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }



// // Pattern - 2
// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout << i << " ";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }


// // Pattern - 3 
// int main(){
//     int n;
//     cin>>n;
//     int i = 1;

//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout << j << " ";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// Pattern - 4
// 1st method ->
// int main(){
//     int n;
//     cin >> n;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=n){
//             cout << n-j+1 << " ";
//             j++;
//         }
//         i++;
//         cout << endl;
//     }
// }

// Pattern 4 
// 2nd methodd ->
// int main(){
//     int i = 0;
//     int n;
//     cin >> n;

//     while (i < n) {
//         int j = 0;
//         while ( j < n){
//             cout << n - j << " ";
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }

// Pattern 5
// int main(){
//     int i = 1;
//     int count = 1;
//     int n;
//     cin >> n;
//     while (i <= n) {
//         int j = 1;
//         while(j <= n){
//             cout << count << "  ";
//             count = count + 1;
//             j = j + 1;
//         }
//         cout << endl;
//         i = i + 1;
//     }
// }


// // Pattern 6
// int main(){
//     int n;
//     cin >> n;

//     int row = 1;
//     while (row <= n){

//         int col = 1;
//         while(col<=row){
//             cout <<"* ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }

// // Pattern 7
// int main(){
//     int n;
//     cin >> n;

//     int row = 1;
//     while (row <= n){

//         int col = 1;
//         while(col<=row){
//             cout << row << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }

// // Pattern - 8 
// int main(){
//     int n;
//     cin >> n;
//     int count = 1; 
//     int row = 1;
//     while (row <= n){

//         int col = 1;
//         while(col<=row){
//             cout << count << " ";
//             count = count + 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }

// Pattern - 9
// int main(){
//     int row = 1;
//     int n;
//     cin >> n;

//     while (row <= n){
//         int col = 1;
//         int count = row;
//         while (col <= row){
//             cout << count << " ";
//             count = count + 1;
//             col = col + 1;
//         }       
//         cout << endl;

//         row = row + 1;
//     }
// }

// Pattern 10
// method -1 
// int main(){
//     int row = 1;
//     int n;
//     cin >> n;
    
//     while (row <= n){
//         int op = row;
//         int col = 1;
//         while (col <= row){
//             cout << op << " ";
//             op = op - 1;
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }

// method -2
// int main(){
//     int row = 1;
//     int n;
//     cin >> n;
    
//     while (row <= n){

//         int col = 1;
//         while (col <= row){
//             cout << (row - col + 1) << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }

// int main(){
//     int n;
//     cin >> n;

//     int row = 1;
//     while(row <= n){
//         int col = 1;

//         while(col <= n){
//             char ch = 'A' + row -1;
//             cout << ch << " ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// }


// int main (){
//     int n;
//     cin >> n;
//     int row = 1;
//     while (row <= n) {
//         int col = 1;
//         while (col <= n){
//             char ch = 'A' + row + col - 2;
//             cout << ch <<" ";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;
//     }
// } 

int main(){
    int n;
    cin >> n;
    int row = 1;
    while(row <= n){
        int col = 1;
        while (col <= row){
            char ch = 'A' + n - row + col - 1;
            cout << ch;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}


// int main(){
//     int n; 
//     cin >> n;

//     int row = 1;

//     while (row <= n){
//         // space print karlo
//         int space = n -row;
//         while(space){
//             cout << " ";
//             space = space -1;
//         }
//         // start print karlo 
//         int col = 1;
//         while(col <= row){
//             cout << "*";
//             col = col + 1;
//         }
//         cout << endl;
//         row = row + 1;

//     }
// }




 