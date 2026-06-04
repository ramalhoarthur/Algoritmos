#include <bits/stdc++.h>
using namespace std;

class Grafo_Lista {
       int v;
       list<int> *lista;

       public:
              Grafo_Lista (int v) {
                     this->v = v;
                     lista = new list<int>[v];
              }

              void adicionarAresta(int x, int y) {
                     lista[x].push_back(y);
                     lista[y].push_back(x);                     
              }

              void printGrafo () {
                     for(int i=0 ; i < v ; i++) {
                            cout << "Vértice " << i << "->";
                            for(int adj:lista[i]) {
                                   cout << adj << ", ";
                            }
                            cout  << "\n";
                     }
              }
};

int main () {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       Grafo_Lista grafo(4);

       grafo.adicionarAresta(0, 0);
       grafo.adicionarAresta(3, 2);
       grafo.adicionarAresta(2, 2);
       
       grafo.printGrafo();
       return 0;
}
