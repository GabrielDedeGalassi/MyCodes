#include <iostream>

using namespace std;

int main() {
  int x, i = 0, k, l = 0;
  cin >> x;
  int lis[x];
  for(i = 0; i < x; i++){
    cin >> lis[i];
  }
  cin >> k;
  i = 0;
  while(i < x){
    if(k == lis[i]){
      l += 1;
    }
    i++;
  }
  cout << l << endl;
}