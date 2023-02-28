#include <iostream>
#include <regex>

int main()
{
  std::string s1 = "\\w\\\\w";
  std::string s2 = R"(\w\\w)";
  std::cout << s1;
  return 0;
}