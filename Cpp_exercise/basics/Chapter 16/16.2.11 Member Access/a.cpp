#include <iostream>
using namespace std;

void TestFunction(int i, int nEnd)
{
	static int x;
  x = 0;
	int y = 0;
	
	x++;
	y++;

	if(i == (nEnd-1))
	{
		cout<<"x="<<x<<endl;
		cout<<"y="<<y<<endl;
	}
}

int main()
{
	for(int i = 0 ; i < 5 ; i++)
		TestFunction(i, 5);

	system("pause");
	return 0;
}