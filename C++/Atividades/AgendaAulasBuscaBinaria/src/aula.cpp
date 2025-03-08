#include <iostream>
#include "../include/aula.hpp"
using namespace std;

int VeriAula(aula *a, int hora, int minuto, int inicio, int fim){
  int meio = (inicio + fim)/2;
  // cout << quant << " " << a[quant].disci << endl;
  if(inicio > fim){
    return -1;
  }
  if(a[meio].hora == hora and a[meio].minuto == minuto){
    return meio;
  }
  if(a[meio].hora > hora or (a[meio].hora == hora and a[meio].minuto > minuto)){
    return VeriAula(a, hora, minuto, inicio, meio-1);
  }
  if(a[meio].hora < hora or (a[meio].hora == hora and a[meio].minuto < minuto)){
    return VeriAula(a, hora, minuto, meio+1, fim);
  }
  return 0;
}