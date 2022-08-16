#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int main() {

  vector<int> v;

  v.push_back(1);
  v.push_back(3);
  v.push_back(5);
  v.push_back(7);

  cout << "String : ";
  for (int i : v) {
    cout << i << " ";
  }
  cout << endl;

  cout << "Finding 6 -> " << binary_search(v.begin(), v.end(), 6) << endl;
  cout << "Finding 5 -> " << binary_search(v.begin(), v.end(), 5) << endl;

  cout << "Lower bound -> " << lower_bound(v.begin(), v.end(), 5) - v.begin()
       << endl;
  cout << "Upper bound -> " << upper_bound(v.begin(), v.end(), 5) - v.begin()
       << endl;

  int a = 3;
  int b = 5;

  cout << "Max -> " << max(a, b) << endl;
  cout << "Min -> " << min(a, b) << endl;

  swap(a, b);
  cout << "a -> " << a << endl;

  string abcd = "abcd";
  reverse(abcd.begin(), abcd.end());
  cout << "Reversed string : " << abcd << endl;

  rotate(v.begin(), v.begin() + 1, v.end());
  cout << "After rotation : " << endl;

  for (int i : v) {
    cout << i << " ";
  }cout << endl;

  cout << "Sorting : ";
  sort(v.begin(), v.end());
  for (int i : v) {
    cout << i << " ";
  }
  cout << "Sorting is based on introsort : Intro sort is a combination of 3 sorts. 1.quick sort 2. heap sort 3.insertion sort ";

  
}  