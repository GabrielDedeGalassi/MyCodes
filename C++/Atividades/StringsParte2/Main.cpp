#include <iostream>

using namespace std;

string maior(string p1, string p2) {
  string rep;
  if (p1.size() > p2.size()) {
    rep = p1;
  } else if (p1.size() < p2.size()) {
    rep = p2;
  } else if (p1.size() == p2.size()) {
    rep = p1+p2;
  }
  return rep;
}

int main() {
  string palavra1, palavra2;

  cin >> palavra1 >> palavra2;

  cout << maior(palavra1, palavra2) << endl;
}