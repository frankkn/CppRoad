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
    Circle(int radius = 0){
      this->radius = 0; // this指向(執行這個constructor函式的)物件，而非類別。
      setRadius(radius);
    }
    void setRadius(int r);
};

class Rectangle:public Shape{
    int height; 
    int width;
  public:
    Rectangle(int height = 0, int width = 0){
      this->height = 0;
      this->width = 0;
      setHeight(height);
      setWidth(width);
    }
    void setHeight(int height);
    void setWidth(int width);
};