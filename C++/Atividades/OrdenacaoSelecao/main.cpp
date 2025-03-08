#include <iostream>
using namespace std;

void Troca(int *v, int x, int y);

int main() {
  int *vetor, n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> vetor[i];
  }
  for(int i = 0; i < n - 1; i++){
	  int menor = i;
	  for(int j = i + 1; j < n; j++){
		  if(vetor[j] < vetor[menor]){
			  menor = j;
		  }
	  Troca(vetor, i, menor);
	  }
  }
  for(int i = 0; i < n; i++){
    cout << vetor[i] << " ";
  }
  cout << endl;
}

void Troca(int *v, int x, int y) {
  int aux = v[x];
  v[x] = v[y];
  v[y] = aux;
}