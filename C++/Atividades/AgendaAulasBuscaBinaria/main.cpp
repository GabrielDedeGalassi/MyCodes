#include <iostream>
#include "include/aula.hpp"
using namespace std;

int main() {
  int n, h1, m1;
  cin >> n;
  aula v[n];
  for (int i = 0; i < n; i++) {
    cin >> v[i].hora;
    cin >> v[i].minuto;
    cin >> v[i].disci;
  }
  cin >> h1, cin >> m1;
  int defi = VeriAula(v, h1, m1, 0, n);
  if(defi < 0) {
    cout << "SEM AULAS" << endl;
  } else {
    cout << v[defi].disci << endl;
  }
}