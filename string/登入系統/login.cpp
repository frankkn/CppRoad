#include <iostream>
#include <string>
using namespace std;

int main(){
  
  int counter = 0;
  bool isLogin = false;
  while(counter < 3){
    counter++;
    string acc, pass;
    cin >> acc;
    if(acc == "abcd"){
      cin >> pass;
      if(pass == "1234"){
        cout << "Welcome!";
        isLogin = true;
        break;
      }else{
        if(counter == 3){
          cout << "Over three times!";
        }else{
          cout << "Password is wrong!\n";
        }
      }
    }else{
      if(counter == 3){
        cout << "Over three times!";
      }else{
        cout << "Account is wrong!\n";
      }
    }
  }
  
  if(isLogin){
    cout << "Do something!";
  }else{
    cout << "Bye bye!";
  }

  return 0;
}