#include "CShape.h"

CShape::CShape() {
  girth = 0;
  area = 0;
}

CShape::~CShape() {

}

double CShape::getArea() const {
  return area;
}

double CShape::getGirth() const {
  return girth;
}

void CShape::setArea(double area) {
  this->area = area;
}

void CShape::setGirth(double girth) {
  this->girth = girth;
}

