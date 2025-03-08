#include <iostream>
using namespace std;

void Troca(int *v, int x, int y);

int main() {
  int *vetor, n;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> vetor[i];
  }
  for(int i = 0; i < n; i++){
		for(int j = 0; j < (n - i) - 1; j++){
			if(vetor[j] > vetor[j + 1]){
				Troca(vetor, j, j+1);
			}
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