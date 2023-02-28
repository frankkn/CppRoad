#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  /*
  vector<int> v;
  v.emplace_back(1);
  v.emplace_back(2);
  v.emplace_back(3);
  vector<int>::iterator it;
  for (it = v.begin(); it != v.end(); ++it) {
    cout << *it << endl;
  }

  vector<string> *p = new vector<string>();
  p->emplace_back("Frank");
  p->emplace_back("Amy");
  p->emplace_back("Bob");
  vector<string>::iterator it2;
  for (it2 = p->begin(); it2 != p->end(); ++it2) {
    cout << *it2 << endl;
  }
  */

  vector<int> nums(10);
  for (int i = 0; i < nums.size(); ++i) {
    nums.at(i) = i;
  }
  nums.insert(nums.begin()+3, 9260);
  for (auto& i: nums) { cout << i << " "; }
  cout << endl;

  nums.erase(nums.begin()+4);
  for (auto& i: nums) { cout << i << " "; }
  cout << endl;

  return 0;
}