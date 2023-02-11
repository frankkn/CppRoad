#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
  /*
  fstream fs("test.txt");
  fstream *pfs = new fstream("test.txt");
  cout << fs.is_open() << endl;
  cout << pfs->is_open() << endl;
  
  while (1) {
    int i = pfs->get();
    if (i == -1) { break; }
    cout << (char)i << " ";
  }
  cout << endl;

  fs.close();
  pfs->close();
  */

  /*
  fstream *pfs = new fstream("test.txt");
  char c;
  while (!pfs->get(c).eof()) {
    cout << c;
  }
  cout << endl;
  */

  /*
  fstream *pfs = new fstream("test.txt");
  char *c = new char[100];
  while (!pfs->getline(c, 100).eof()) {
    cout << c << endl;
  }
  */

  /*
  // 讀每個(以空格隔開的)string
  fstream *pfs = new fstream("test.txt");
  char *c = new char[100];
  while (!pfs->eof()) {
    *pfs >> c;
    cout << c << endl;
  }
  */

  // 讀檔，並以空格隔開。
  fstream *pfs = new fstream("test.txt");
  string s;
  vector<string> v;
  while (getline(*pfs, s)) {
    stringstream ss(s);
    string a;
    while (ss >> a) {
      v.emplace_back(a);
    }
  }
  for (auto& v_i:v) {
    cout << v_i << " ";
  }
  cout << endl;

  return 0;
}