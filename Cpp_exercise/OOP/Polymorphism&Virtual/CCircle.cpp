#include <iostream>
#include "CCircle.h"
using namespace std;

CCircle::CCircle() {
  radius = 0;
}

CCircle::~CCircle() {

}

void CCircle::showInfo() {
  cout << "CCircle's area : " << getArea() << endl;
  cout << "CCircle's girth : " << getGirth() << endl;
}


int CCircle::getRadius() const {
  return radius;
}

void CCircle::setRadius(int radius) {
  this->radius = radius;
  setArea(radius*radius*3.14);
  setGirth(radius*2*3.14);
}