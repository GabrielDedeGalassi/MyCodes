#include <iostream>
#include "../include/coordenada.hpp"
using namespace std;

int getQuadrante(coordenada c){
  if(c.x > 0 and c.y > 0) return 0;

  else if(c.x < 0 and c.y > 0) return 1;

  else if(c.x < 0 and c.y < 0) return 2;

  else if(c.x > 0 and c.y < 0) return 3;
  
  return -1;
}

void conta_quandrantes(coordenada *coordenadas, int n, int *q){
  cout << "quadrante 1: " << q[0] << endl;
  for(int i = 0; i < n; i++){
    if(getQuadrante(coordenadas[i]) == 0)
      cout << coordenadas[i].x << " " << coordenadas[i].y << endl;
  }

  cout << "quadrante 2: " << q[1] << endl;
  for(int i = 0; i < n; i++){
    if(getQuadrante(coordenadas[i]) == 1)
      cout << coordenadas[i].x << " " << coordenadas[i].y << endl;
  }

  cout << "quadrante 3: " << q[2] << endl;
  for(int i = 0; i < n; i++){
    if(getQuadrante(coordenadas[i]) == 2)
      cout << coordenadas[i].x << " " << coordenadas[i].y << endl;
  }
  
  cout << "quadrante 4: " << q[3] << endl;
  for(int i = 0; i < n; i++){
    if(getQuadrante(coordenadas[i]) == 3)
      cout << coordenadas[i].x << " " << coordenadas[i].y << endl;
  }
}