#include <iostream>
using namespace std;

void print_mi5(int m[][5], int dim1)
{
  for (int i = 0; i!=dim1; i++) 
  {
    for (int j = 0; j!=5; j++)
      cout << m[i][j] << '\t';
    cout << '\n';
  } 
}

// doesn’t behave as most people would think
// void print_mij(int m[][], int dim1, int dim2) 
// {
//   for (int i = 0; i!=dim1; i++) 
//   {
//     for (int j = 0; j!=dim2; j++)
//       cout << m[i][j] << '\t'; // surprise!
//     cout << '\n';
//   } 
// }

void print_mij(int* m, int dim1, int dim2)
{
  for (int i = 0; i!=dim1; i++) 
  {
    for (int j = 0; j!=dim2; j++)
      cout << m[i*dim2+j] << '\t'; // obscure
    cout << '\n';
  } 
}

int main()
{
  int v[3][5] = {
    {0,1,2,3,4}, {10,11,12,13,14}, {20,21,22,23,24}
  };
  //print_mi5(v,3);
  print_mij(&v[0][0],3,5);
  return 0;
}