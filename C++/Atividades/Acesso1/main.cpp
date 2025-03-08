#include <iostream>

using namespace std;

int main() {
  int x;
  cin >> x;
  string nomes[6] = {"Lewis", "Charles", "Max", "Daniel", "Sebastian", "Pierre"};
  string sobrenomes[6] = {"Hamilton", "Leclerc", "Verstappen", "Ricciardo", "Vettel", "Gasly"};
  char y = nomes[x-1].at(0);
  cout << y << ". " << sobrenomes[x-1] << endl;
}