#include <iostream>
#include "CShape.h"
#include "CCircle.h"
using namespace std;

int main() {
  
  /*
  CShape cs;
  cout << cs.getArea() << endl;

  CCircle cc;
  cc.setRadius(10);
  cout << cc.getArea() << endl;

  cs = cc;
  cout << cs.getArea() << endl;

  cc.setRadius(100);
  cout << cc.getArea() << endl;
  cout << cs.getArea() << endl;
  */

  CCircle c;
  c.setRadius(100);
  CShape *pcs = &c;
  cout << pcs->getArea() << endl;
  CShape &rcs = c;
  cout << rcs.getArea() << endl;

  return 0;
}