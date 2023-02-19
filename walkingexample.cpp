#include <iostream>
using namespace std;

void reachHome(int src, int dest){
    cout << "source : " << src << " | Destination : " << dest << endl;
    // base case
    if(src == dest){
        cout << "(((((( Pohoch gya ))))))) " << endl;
        return ;
    }

    // recursive call
    // processing - ek step aage badh jao
    src++;
    reachHome(src, dest);
}

int main(){
    int dest = 10, src = 1;
    cout << endl;
    reachHome(src, dest);
    
}