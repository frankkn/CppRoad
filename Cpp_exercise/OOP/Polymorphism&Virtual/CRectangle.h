#ifndef CRECTANGLE_H_H
#define CRECTANGLE_H_H

#include "CShape.h"

class CRectangle: public CShape {
  private:
    int length;
    int width;
  
  public:
    CRectangle();
    virtual ~CRectangle();

    int getLength() const { return length; }
    int getWidth() const { return width; }

    void setValues(int length, int width) {
      this->length = length;
      this->width = width;
      setArea(length*width);
      setGirth((length+width)*2);
    }

};

#endif