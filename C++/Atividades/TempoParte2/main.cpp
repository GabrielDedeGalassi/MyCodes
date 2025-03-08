#include <iostream>
#include "include/tempo.hpp"
using namespace std;

int main() {
  int x;
  cin >> x;
  tempo lis[x], y;
  for(int i = 0; i < x; i++){
    cin >> lis[i].horas, cin >> lis[i].minutos, cin >> lis[i].segundos;
  }
  cin >> y.horas, cin >> y.minutos, cin >> y.segundos;
  for(int i = 0; i < x; i++){
    if(compara_tempo(lis[i], y) == 1){
      cout << lis[i].horas << " " << lis[i].minutos << " " << lis[i].segundos << endl;
    }
  }
}