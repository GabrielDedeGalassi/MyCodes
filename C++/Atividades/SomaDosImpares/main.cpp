#include <iostream>
using namespace std;

int impar(int x, int y);

int main() {
  int n1, n2;
  cin >> n1, cin >> n2;
  cout << impar(n1, n2) << endl;
}

int impar(int x, int y){
  int z;
  for(int i = x; i <= y; i++){
    if(i%2 != 0){
      z += i;
    }
  }
  return z;
}