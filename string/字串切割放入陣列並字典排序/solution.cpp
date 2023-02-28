#include <iostream>
#include <string>
using namespace std;

int main(){
  string s1 = "Bob,John,Mary,Amy,Danny";
  string s2 = ",";
  size_t pos = s1.find(s2);
  int count = 0;
  while(pos != string::npos){
    count++;
    pos = s1.find(s2, pos + s2.size());
  }
  string* words = new string[count+1];
  size_t start_pos = 0;
  size_t end_pos = s1.find(s2);
  for(int i = 0; i <= count; i++){
    words[i] = s1.substr(start_pos, end_pos - start_pos);
    start_pos = end_pos + 1;
    end_pos = s1.find(s2, start_pos);
  }

  int smallestIndex = 0;
  for(int j = 0; j < count; j++){
    for(int i = j+1; i <= count; i++){
      if(words[smallestIndex].compare(words[i]) > 0){
        smallestIndex = i;
      }
    }
    swap(words[j], words[smallestIndex]);
  }

  for(int i = 0; i <= count; i++){
    cout << words[i] << endl;
  }

  return 0;
}