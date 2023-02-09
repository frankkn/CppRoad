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

void Circle::setRadius(int radius){
  if(radius >= 0 && radius <= 1000){
    this->radius = radius;
    // area = radius*radius*3.14;
    setArea(radius*radius*3.14);
  }
}

void Rectangle::setHeight(int height){
  if(height >= 0 && height <= 1000){
    this->height = height;
    // area = height * width;
    setArea(height * width);
    setGirth((height+width)*2);
  }
}

void Rectangle::setWidth(int width){
  if(width >= 0 && width <= 1000){
    this->width = width;
    // area = height * width;
    setArea(height * width);
    setGirth((height+width)*2);
  }
}