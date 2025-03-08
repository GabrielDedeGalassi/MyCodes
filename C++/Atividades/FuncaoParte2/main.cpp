#include <iostream>

using namespace std;

bool eh_magico (int x){
  bool magi;
  if (x%2 == 0 || x%5 == 0) {
    magi = true;
  } else {
    magi = false;
  }
  return magi;
}

int main() {
  int n1, n2;

  cin >> n1;
  cin >> n2;

  
  if (eh_magico(n1) == true) {
    cout << "N1 e' magico" << endl;
  }

  if (eh_magico(n2)) {
    cout << "N2 e' magico" << endl;
  }
  
  if (!eh_magico(n1) && eh_magico(n2) == false) {
    cout << "Nenhum e' magico" << endl;
  }
}