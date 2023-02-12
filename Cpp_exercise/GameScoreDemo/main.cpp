#include <algorithm>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
  fstream fin("scores.txt");
  string s;
  vector<pair<string,int>> scoreTable;
  while (getline(fin, s)) {
    stringstream ss(s);
    string name;
    int score;
    while (ss >> name >> score) {
      scoreTable.emplace_back(name, score);
    }
  }
  fin.close();

  scoreTable.emplace_back("Mr.7", 77777);
  scoreTable.emplace_back("Lapi", 9260);
  scoreTable.emplace_back("Pilgrim", 99999);
  scoreTable.emplace_back("Squad", 98765);

  sort(scoreTable.begin(), scoreTable.end(), [&](auto a, auto b){ return b.second < a.second; });
  for (auto [name, score]:scoreTable) {
    cout << name << " " << score << "\n";
  }


  fstream fout("scores.txt", ios::out);
  for (auto it = scoreTable.begin(); it != scoreTable.begin() + 5; ++it) {
    fout << (*it).first << " " << (*it).second << "\n";
  }

  fout.close();

  return 0;
}