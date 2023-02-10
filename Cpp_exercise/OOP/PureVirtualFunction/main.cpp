#include <iostream>
#include "CShape.h"
#include "CCircle.h"
#include "CRectangle.h"
using namespace std;

void doubleShape(CShape *);

int main() {
  // Shape很適合當抽象類別(abstract class)，
  // CShape *cs = new CShape();

  CCircle cc;
  cc.setRadius(10);
  cc.showInfo();

  return 0;
}