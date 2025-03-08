#include <iostream>

using namespace std;

int solu_expre(int n);

int main() {
  int n;
  cin >> n;
  cout << solu_expre(n) << endl;
}

int solu_expre(int n) {
  if (n <= 3) {
    return 5;
  }
  return n+solu_expre(n-1);
}