#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
  
  /*
  // fstream *pfs = new fstream("test2.out", ios::out); // 覆蓋原檔案
  fstream *pfs = new fstream("test2.out", ios::app); // 串接在原檔案之後
  string s = "Goodbye World!";
  
  // 一個字一個字的寫入
  // for (int i = 0; i < s.size(); ++i) {
  //   pfs->put(s[i]);
  // }
  
  // 字串輸出
  pfs->write(s.c_str(), s.size());
  pfs->close();
  */

  fstream *pfs = new fstream("test2.out", ios::app); 
  string s = "Goodbye World! See ya!";
  *pfs << s;
  *pfs << endl;

  return 0;
}