#include <iostream>

// void f()
// {
//   char* p = "Plato"; // error, but accepted in pre-C++11-standard code
//   p[4] = 'e'; // error : assignment to const
// }

const char* p = "Heraclitus";
const char* q = "Heraclitus";
void g()
{
if (p == q) std::cout << "one!\n"; // the result is implementation-defined
// ...
}

int main(){
  char alpha[] = "abcdefghijklmnopqrstuvwxyz"
  "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  std::cout<< alpha;

  return 0;
}