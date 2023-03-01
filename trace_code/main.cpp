#include <iostream>
using namespace std;

int a = 100;
int b = 200;
int c = 300;

void calculate1();
void calculate2();
void calculate3();

int main(){
  int a = 10;
  int b = 20;
  {
    int c = 30;
    {
      int a = 40;
      b = 50;
      c = a + b + c;
    }
    a = a + b + c;
  }
  calculate1();
  calculate2();
  calculate3();

  cout << "After calculations" << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;

  return 0;
}

void calculate1(){
  int a = 50;
  int b = 60;
  a = a + 2 * b;
}

void calculate2(){
  int a = 70;
  {
    int b = 80;
    int c = 90;
    a = a + b + c;
  }
}

void calculate3(){
  int c = a + b + c;
  {
    int a = 100;
    b = 500;
    c = a + b + c;
  }
}