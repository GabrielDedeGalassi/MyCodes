#include <iostream>
using namespace std;

int TopoMont(int inicio, int fim,int *v);

int main() {
  int n;
  cin >> n;
  int *mont = new int(n);
  for(int i = 0; i < n; i++) cin >> mont[i];
  cout << TopoMont(0, n, mont) << endl;
}

int TopoMont(int inicio, int fim,int *v) {
  int topo = (inicio + fim)/2;
  if(inicio > fim) return -1;

  if(v[topo] > v[topo+1] and v[topo] > v[topo-1]) return v[topo];

  if(v[topo] < v[topo-1]) return TopoMont(inicio, topo-1, v);

  if(v[topo] < v[topo+1]) return TopoMont(topo+1, fim, v);
  
  return 0;
}