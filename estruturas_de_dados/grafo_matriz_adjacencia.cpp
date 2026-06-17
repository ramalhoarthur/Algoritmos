#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main () {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       //Número de vértices(n) e quantidade de arestas(m):
       int n, m;
       cin >> n >> m;

       //Grafo representado por matriz de adjacências:
       vector<vi> grafo_matriz;
       grafo_matriz.resize(n+1, vi(n+1));

       for(int i=0 ; i<m ; i++) {
              int u, v;
              cin >> u >> v;

              grafo_matriz[u][v] = 1;
              grafo_matriz[v][u] = 1;
       }       

       for (int i=1 ; i<n+1 ; i++) {
              for (int j=1 ; j < n+1 ; j++) {
                     cout << grafo_matriz[i][j] << " ";
              }
              cout << "\n";
       }
       return 0;
}
