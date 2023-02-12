#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() { 
  vector<int> v;
  v.emplace_back(5);
  v.emplace_back(2);
  v.emplace_back(3);
  v.emplace_back(4);
  v.emplace_back(1);
  
  sort(v.begin(), v.end());
  vector<int>::iterator it;
  for (it = v.begin(); it != v.end(); ++it) {
    cout << *it << " ";
  }
  cout << endl;

  // reverse(v.begin(), v.end());
  // for (it = v.begin(); it != v.end(); ++it) {
  //   cout << *it << " ";
  // }
  // cout << endl;
  
  cout << binary_search(v.begin(), v.end(), 1) << endl; // binary_search，資料需排序。

  vector<int>::iterator ij =find(v.begin(), v.end(), 3); // find，資料不需排序。
  if (it != v.end()) {
    cout << *it << endl;
  }else{
    cout << "Not found!" << endl;
  }

  return 0;
}