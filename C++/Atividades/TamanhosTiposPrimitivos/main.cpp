#include <iostream>

using namespace std;

int main() {
  int intsize = sizeof(int);
  int boolsize = sizeof(bool);
  int charsize = sizeof(char);
  int doubsize = sizeof(double);
  cout << charsize << endl;
  cout << boolsize << endl;
  cout << intsize << endl;
  cout << doubsize << endl;
}