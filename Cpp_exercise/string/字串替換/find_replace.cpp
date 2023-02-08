#include <iostream>
#include <string>
using namespace std;

int main()
{
  string sentence = "I love Java, Java is good, Java is very useful.";
  string replaced_word = "Java";
  string new_word = "C++";
  size_t pos = sentence.find(replaced_word);
  while(pos != string::npos)
  {
    sentence.replace(pos,replaced_word.size(), new_word);
    pos = sentence.find(replaced_word, pos+new_word.size());
  }
  cout << sentence;
  return 0; 
}