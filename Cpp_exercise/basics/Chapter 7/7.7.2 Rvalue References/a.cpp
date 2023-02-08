#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  vector<int> v(128);

  cout << "Initial capacity = " << v.capacity() << endl;
  cout << v.size() << endl;

  v.resize(25);
  cout << "Capacity after resize = " << v.capacity() << endl;
  cout << v.size() << endl;

  v.shrink_to_fit();
  cout << "Capacity after shrink_to_fit = " << v.capacity() << endl;
  cout << v.size() << endl;

  return 0;
}