#include <iostream>

extern "C" int strlen(const char*); // from <string.h>
void f()
{
  char v[] = "Annemarie";
  char* p = v; // implicit conversion of char[] to char*
  std::cout << strlen(p) << std::endl;
  std::cout << strlen(v); // implicit conversion of char[] to char*
  //v = p; // error : cannot assign to array
}

int main(){
  f();
  return 0;
}