#include <iostream>
#include "CShape.h"
using namespace std;

CShape::CShape() {
  girth = 0;
  area = 0;
}

CShape::~CShape() {

}

void CShape::showInfo() {
  cout << "CShape's area : " << getArea() << endl;
  cout << "CShape's girth : " << getGirth() << endl;
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

