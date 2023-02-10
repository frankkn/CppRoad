#include <iostream>
#include "CShape.h"
#include "CCircle.h"
#include "CRectangle.h"
using namespace std;

void showArea(CShape *pcs){
  cout << "The area is: " << pcs->getArea() << endl;
}

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

  /*
  CCircle c;
  c.setRadius(100);
  CShape *pcs = &c;
  cout << pcs->getArea() << endl;
  CShape &rcs = c;
  cout << rcs.getArea() << endl;
  CRectangle cr;
  cr.setValues(10, 8);
  cout << cr.getArea() << endl;

  CShape *array[5];
  array[0] = &c;
  array[1] = &cr;
  array[2] = new CCircle();
  array[3] = new CRectangle();
  cout << array[0]->getArea() << endl;
  cout << array[1]->getArea() << endl;
  cout << array[2]->getArea() << endl;
  cout << array[3]->getArea() << endl;
  */

  // CCircle cc;
  // cc.setRadius(123);
  // CRectangle cr;
  // cr.setValues(12, 3);
  // showArea(&cc);
  // showArea(&cr);

  CCircle c;
  c.setRadius(100);
  CShape *pcs = &c;
  CShape &rcs = c;
  cout << pcs->getArea() << endl; // 會執行父類別中定義的getArea()，而非子類別定義的getArea()。
  cout << rcs.getGirth() << endl; // 會執行父類別中定義的getGirth()，而非子類別定義的getGirth()。
  CRectangle r;
  r.setValues(123, 456);
  pcs = &r;
  cout << pcs->getArea() << endl;

  

  return 0;
}