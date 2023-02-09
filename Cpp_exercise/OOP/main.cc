#include <iostream>
#include "shape.h"
using namespace std;

int main(){
  Circle c1;
  c1.setRadius(10);
  cout << c1.getArea() << endl;

  Rectangle r1;
  r1.setHeight(10);
  r1.setWidth(20);
  cout << r1.getArea() << endl;
  return 0;
}