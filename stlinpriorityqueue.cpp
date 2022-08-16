// STL in priority queue
// First element will always be the greatest 
// MAX HEAP me element fetch karte time sabse pehle hamesha sabse maximum element hi fetch hoga
// MIN HEAP me element fetch karte time sabse pehle hamesha sabse minimum element hi fetch hoga

#include <iostream>
#include <queue>
using namespace std;

int main(){
    // Max heap
    priority_queue<int> maxi;

    // Min heap
    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(4);
    maxi.push(0);
    cout << "Size of maxi : " << maxi.size() << endl;
    int n = maxi.size();
    for(int i = 0; i <n; i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;
    cout << "Size of maxi : " << maxi.size() << endl;


    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    cout << "Size of mini : " << mini.size() << endl;

    int m = mini.size();
    for(int i = 0; i<m; i++){
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
    cout << "Size of mini after popping all elements : " << mini.size() << endl;
    cout << "Khaali hai kya bhai ? " << mini.empty() << endl;

    
}