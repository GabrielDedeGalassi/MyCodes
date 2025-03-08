#include <iostream>

using namespace std;

int main() {
  char x;
  cin >> x;
  if(x == 'z'){
    cout << "a" << endl;
  }else if(x != 'z'){
    cout << ++x << endl;
  }
}