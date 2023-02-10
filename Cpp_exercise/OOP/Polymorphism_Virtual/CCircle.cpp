#include "CCircle.h"

CCircle::CCircle() {
  radius = 0;
}

CCircle::~CCircle() {

}

int CCircle::getRadius() const {
  return radius;
}

void CCircle::setRadius(int radius) {
  this->radius = radius;
  setArea(radius*radius*3.14);
  setGirth(radius*2*3.14);
}