#include <iostream>
using namespace std;

class Date
{
  private:
    int d;
    int m;
    int y;
  public:
    void init(int dd, int mm, int yy)
    {
      d = dd;
      m = mm;
      y = yy;
    }

    void add_day(int i){ d += i; }
    void add_month(int i){ m += i; }
    void add_year(int i){ y += i; }
    void print_day() { cout << d << endl; }

};

int main()
{
  Date today;
  today.init(12,9,2022);
  Date my_bday = today;
  my_bday.add_day(100);
  today.print_day();
  my_bday.print_day();

  return 0;
}