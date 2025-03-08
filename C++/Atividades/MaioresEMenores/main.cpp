#include <iostream>

using namespace std;

void conta_maior_menor(int *vetor, int tamanho, int *qtd_maior, int *qtd_menor, int k);

int main() {
  int n, k;
  int numeros[10];
  cin >> n;
  int contaMaior = 0, contaMenor = 0;
  for (int i = 0; i < n; i ++) {
    cin >> numeros[i];
  }
  cin >> k;
  conta_maior_menor(numeros, n, &contaMaior, &contaMenor, k);
  cout << contaMaior << " " << contaMenor << endl;
}

void conta_maior_menor(int *vetor, int tamanho, int *qtd_maior, int *qtd_menor, int k){
  for (int i = 0; i < tamanho; i ++) {
    if(k < vetor[i]){
      *qtd_menor += 1;
    } else if(k > vetor[i]){
      *qtd_maior += 1;
    }
  }
}