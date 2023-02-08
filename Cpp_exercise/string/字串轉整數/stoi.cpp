#include <iostream>
#include <string>
using namespace std;

int main(){
  string s1 = "123 456 789 12345 67890";
  
  int count = 0;
  size_t pos = s1.find(" ");
  while(pos != string::npos){
    count++;
    pos = s1.find(" ", pos+1);
  }
  
  int* nums = new int[count + 1];
  size_t st = 0;
  // nums[0] = stoi(s1, &st);
  // for(int i = 1; i <= count; i++){
  //   nums[i] = stoi(s1.substr(st+1), &st);
  // }

  int x = stoi(s1,&st);
  cout << st << endl;
  int y = stoi(s1.substr(st+1), &st);
  cout << st << endl;
  int z = stoi(s1.substr(st+1), &st);

  cout << x << " " << y << " " << z << " ";
  // for(int i = 0; i <= count; i++){
  //   cout << nums[i] << endl;
  // }

  return 0;
}