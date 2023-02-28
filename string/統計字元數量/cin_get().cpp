#include <iostream>
// #include <cstdio> for gets 
#include <cstring> // strlen
#include <iomanip> // setw 
using namespace std;

int main()
{
  char article[2000]; 
  // gets(article);  => 'gets' function is dangerous and should not be used 
  // puts(article);
  cin.get(article,2000);
  
  int UpperCount, LowerCount, NumberCount, SpaceCount, OtherCount;
  UpperCount = LowerCount = NumberCount = SpaceCount = OtherCount = 0;

  for(size_t i = 0; i < strlen(article); i++)
  {
    if(article[i] >= 'A' && article[i] <= 'Z')
    {
      UpperCount++;
    }
    else if(article[i] >= 'a' && article[i] <= 'z')
    {
      LowerCount++;
    }
    else if(article[i] >= '0' && article[i] <= '9')
    {
      NumberCount++;
    }
    else if(article[i] == ' ')
    {
      SpaceCount++;
    }
    else
    {
      OtherCount++;
    }
  }

  cout << setw(30) << "UpperCount is : " << UpperCount << endl;
  cout << setw(30) << "LowerCount is : " << LowerCount << endl;
  cout << setw(30) << "NumberCount is : " << NumberCount << endl;
  cout << setw(30) <<  "SpaceCount is : " << SpaceCount << endl;
  cout << setw(30) <<  "OtherCount is : " << OtherCount << endl;
  cout << setw(30) <<  "TotalCount is : " << UpperCount+LowerCount+NumberCount+SpaceCount+OtherCount << endl;
  cout << setw(30) <<  "The length of article is : " << strlen(article) << endl;

  // cout << article << endl;
  return 0;
}