#include <iostream>
using namespace std;

int countDistinctWays(int nStairs) {
    // base case
    if(nStairs < 0)
        return 0;
    if(nStairs == 0)
        return 1;
    
    return (countDistinctWays(nStairs-1) + countDistinctWays(nStairs-2));
}

int main(){

    int n;
    cin >> n;
    int con = countDistinctWays(n);
    cout << con;
    
    
}