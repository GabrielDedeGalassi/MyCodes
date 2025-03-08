#include <iostream>
using namespace std;

void Troca(int *v, int x, int y);

int main() {
  int *v, n, q = 0, w = 0;
  cin >> n;
  for(int i = 0; i < n; i++) cin >> v[i];
  
  while(w < n){
		if(w == 0) {
      w++;
      continue;
    }
    if(v[w] >= v[w-1]){
      w++;
      continue;
    }
    if(v[w] < v[w-1]){
      Troca(v, w-1, w);
      q += 1;
      w--;
      continue;
    }
    w++;
	}

  for(int i = 0; i < n; i++){
    cout << v[i];
    if(i != n-1) cout << " ";
  }
  cout << endl << q << endl;
}

void Troca(int *v, int x, int y) {
  int aux = v[x];
  v[x] = v[y];
  v[y] = aux;
}