#include <iostream>
#include <string> 
#include <iomanip> // setw 
using namespace std;

int main()
{
  char* article = new char[2000];
  cin.getline(article,2000);
  string s_article(article);
  int up,low,num,sp,other;
  up = low = num = sp = other = 0;
  for(size_t i = 0; i < s_article.size(); i++){
    char c = s_article[i];
    if(c >= 'A' && c <= 'Z'){
      up++;
    }else if(c >= 'a' && c <= 'z'){
      low++;
    }else if(c >= '0' && c <= '9'){
      num++;
    }else if(c == ' '){
      sp++;
    }else{
      other++;
    }
  }

  cout << setw(30) << "UpperCount is : " << up << endl;
  cout << setw(30) << "LowerCount is : " << low << endl;
  cout << setw(30) << "NumberCount is : " << num << endl;
  cout << setw(30) <<  "SpaceCount is : " << sp << endl;
  cout << setw(30) <<  "OtherCount is : " << other << endl;
  cout << setw(30) <<  "TotalCount is : " << up+low+num+sp+other << endl;
  cout << setw(30) <<  "The length of article is : " << s_article.size() << endl;
  return 0;
}