#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

class Grafo_Matriz {
       private: 
              int v;
              vector<vi> matriz;
       
       public:
              //Método Construtor:
              Grafo_Matriz(int v) {
                     this->v = v;
                     matriz.resize(v, vi(v));
              }
              void adicionarAresta (int x, int y) {
                     matriz[x][y] = 1;
                     matriz[y][x] = 1;
              }
              void imprimirGrafo () {
                     int i, j;
                     for (i=0 ; i<v ; i++) {
                            for (j=0 ; j < v ; j++) {
                                   cout << matriz[i][j] << " ";
                            }
                            cout << "\n";
                     }
              }
};

int main () {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       Grafo_Matriz grafo(4);
       
       grafo.adicionarAresta(0, 0);
       grafo.adicionarAresta(3, 2);
       grafo.adicionarAresta(2, 2);
       
       grafo.imprimirGrafo();
       return 0;
}
