#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s1 = "C,C++,Java";
  string s2 = ",";

  size_t pos = s1.find(s2);
  int count = 0; // count number of s2
  while(pos != string::npos)
  {
    count++;
    pos = s1.find(s2, pos + s2.size());
  }

  string *words = new string[count+1]; // string words[count+1] is not allowed 
  
  size_t start_pos = 0;
  for(int i = 0; i <= count; i++) // # of words = count + 1
  {
      size_t end_pos = s1.find(s2, start_pos);
      words[i] = s1.substr(start_pos, end_pos-start_pos);
      start_pos = end_pos + 1;
  }

  for(int i = 0; i <= count; i++)
  {
    cout << words[i] << "\n";
  }

  return 0;
}