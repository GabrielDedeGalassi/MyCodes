#include <iostream>

using namespace std;

int maior(int *vetor, int tamanho);
void contrario(int *vetor, int tamanho);

int main() {
  int n, k;
  int numeros[10];
  cin >> n;
  
  for (int i = 0; i < n; i ++) {
    cin >> numeros[i];
  }
  cout << maior(numeros, n) << endl;
  contrario(numeros, n);
}

int maior(int *vetor, int tamanho){
  int maior = 0;
  for(int i = 0; i < tamanho; i++){
    if(vetor[i] > maior){
      maior = vetor[i];
    }
  }
  return maior;
}
void contrario(int *vetor, int tamanho){
  for(int i = tamanho-1; i >= 0; i--){
    cout << vetor[i] << " ";
  }
  cout << endl;
}