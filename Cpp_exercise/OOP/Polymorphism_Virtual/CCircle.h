 #ifndef CCIRCLE_H_
 #define CCIRCLE_H_

 #include "CShape.h"

 class CCircle: public CShape {
  private:
    int radius;

  public:
    CCircle();
    virtual ~CCircle();

    int getRadius() const;
    void setRadius(int radius);
};

#endif
