#include <iostream>
#include "include/tempo.hpp"
using namespace std;

int main() {
  tempo x, y;
  cin >> x.horas, cin >> x.minutos, cin >> x.segundos;
  cin >> y.horas, cin >> y.minutos, cin >> y.segundos;
  cout << compara_tempo(x, y) << endl;
}