#include <iostream>
#include "CShape.h"
#include "CCircle.h"
#include "CRectangle.h"
using namespace std;

// void showArea(CShape *pcs){
//   cout << "The area is: " << pcs->getArea() << endl;
// }

void doubleShape(CShape *);

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

  /*
  CCircle c;
  c.setRadius(100);
  CShape *pcs = &c;
  CShape &rcs = c;
  // cout << pcs->getArea() << endl; // 會執行父類別中定義的getArea()，而非子類別定義的getArea()。
  // cout << rcs.getGirth() << endl; // 會執行父類別中定義的getGirth()，而非子類別定義的getGirth()。
  pcs->showInfo(); // 加上virtual後，子類別會override父類別的函式。
  rcs.showInfo(); 
  CRectangle r;
  r.setValues(123, 456);
  pcs = &r;
  // cout << pcs->getArea() << endl;
  pcs->showInfo();
  */

  CCircle c;
  c.setRadius(10);
  doubleShape(&c);
  cout << c.getArea() << endl;

  CRectangle r;
  r.setValues(10, 5);
  doubleShape(&r);
  cout << r.getArea() << endl;

  return 0;
}

void doubleShape(CShape *pcs){
  // dynamic_cast<CCircle*>(pcs)->setRadius(dynamic_cast<CCircle*>(pcs)->getRadius() * 2);
  CCircle *pcc = dynamic_cast<CCircle*>(pcs); // 這樣轉型後才能拿CCircle定義的函式
  if (pcc != 0) {
    pcc->setRadius(pcc->getRadius()*2);
    return;
  }

  CRectangle *pcr = dynamic_cast<CRectangle*>(pcs);
  if (pcr != 0) {
    pcr->setValues(pcr->getLength()*2, pcr->getWidth()*2);
    return;
  }

}