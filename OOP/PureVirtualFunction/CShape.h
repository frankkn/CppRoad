#ifndef CSHAPE_H_
#define CSHAPE_H_

class CShape{
  private:
    double girth;
    double area;
  public:
    CShape();
    virtual ~CShape();

    double getArea() const;
    double getGirth() const;
    
    virtual void showInfo() = 0;
  protected:
    void setArea(double area);
    void setGirth(double girth);
};





#endif