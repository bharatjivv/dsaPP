#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n;
    cin >> n;

    for (int i = 1; i <= n-1; i++)
    {
        for (int j = i+1; j <= n-1; j++)
        {
            for (int k = j+1; k <= n-1; k++)
            {
                cout << i << " " << j << " " << k << " " << endl;
            }
        }
    }


}