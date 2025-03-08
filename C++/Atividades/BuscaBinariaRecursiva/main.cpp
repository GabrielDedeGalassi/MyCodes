#include <iostream>
using namespace std;

int ProcVetor(int inicio, int fim,int *v, int y);

int main() {
  int n, k;
  cin >> n;
  int *vetor = new int(n);
  for (int i = 0; i < n; i ++) {
    cin >> vetor[i];
  }
  cin >> k;
  if(ProcVetor(0, n, vetor, k) == 1){
    cout << "SIM" << endl;
  } else {
    cout << "NAO" << endl;
  }
}

/*int ProcVetor(int inicio, int fim,int *v, int y) {
  if(x < 0){
    return 0;
  }
  if(v[x] == y){
    return 1;
  }
  return ProcVetor(x - 1, v, y);
}*/

int ProcVetor(int inicio, int fim, int *v, int y) {
  int meio = (inicio + fim)/2;
  if(inicio > fim){
    return -1;
  }
  if(v[meio] == y){
    return 1;
  }
  if(v[meio] > y){
    return ProcVetor(inicio, meio-1, v, y);
  }
  if(v[meio] < y){
    return ProcVetor(meio+1, fim, v, y);
  }
  return 0;
}