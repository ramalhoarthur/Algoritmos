#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main () {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       //Número de Vértices(n) e quantidade de arestas(m):
       int n, m;
       cin >> n >> m;

       //Grafo representado por uma lista de adjacência:
       vector<vi> grafo;
       grafo.resize(n+1);
       
       for(int i=0 ; i<m ; i++) {
              int u, v;
              cin >> u >> v;

              grafo[u].push_back(v);
              grafo[v].push_back(u);
       }

       //Laço para imprimir a lista de adjacência:
       for(int i=1 ; i < n+1 ; i++) {
                            cout << "Vértice " << i << "->";
                            for(int adj:grafo[i]) {
                                   cout << adj << ", ";
                            }
                            cout  << "\n";
                     }

       return 0;
}