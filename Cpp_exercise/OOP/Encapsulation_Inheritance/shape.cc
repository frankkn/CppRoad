#include "shape.h"
using namespace std;

int Shape::getArea(){
  return area;
}

int Shape::getGirth(){
  return girth;
}

void Shape::setArea(int a){
  area = a;
}

void Shape::setGirth(int g){
  girth = g;
}

void Circle::setRadius(int r){
  if(r >= 0 && r <= 1000){
    radius = r;
    // area = radius*radius*3.14;
    setArea(radius*radius*3.14);
  }
}

void Rectangle::setHeight(int h){
  if(h >= 0 && h <= 1000){
    height = h;
    // area = height * width;
    setArea(height * width);
    setGirth((height+width)*2);
  }
}

void Rectangle::setWidth(int w){
  if(w >= 0 && w <= 1000){
    width = w;
    // area = height * width;
    setArea(height * width);
    setGirth((height+width)*2);
  }
}