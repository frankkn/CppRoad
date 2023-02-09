class Shape{
  // protected: 
    int area;
    int girth;
  protected:
    void setArea(int a);
    void setGirth(int g);
  public:
    Shape():area(0), girth(0) {}
    int getArea();
    int getGirth();
};

class Circle:public Shape{
    int radius; 
  public:
    Circle():radius(0) {}
    void setRadius(int r);
};

class Rectangle:public Shape{
    int height;
    int width;
  public:
    Rectangle():height(0), width(0) {}
    void setHeight(int h);
    void setWidth(int w);
};