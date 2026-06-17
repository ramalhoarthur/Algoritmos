#include <bits/stdc++.h>
using namespace std;

void bfs (vector<vector<int>> &grafo, int origem, int n) {
       vector<bool> visitados;
       queue<int> fila;

       visitados.assign(n+1, false);

       fila.push(origem);
       visitados[origem] = true;

       while(!fila.empty()) {
              int atual = fila.front();
              fila.pop();

              for(int vizinho : grafo[atual]) {
                     if(!visitados[vizinho]) {
                            visitados[vizinho] = true;
                            fila.push(vizinho);
                     }
              }
       }
}

int main () {
       int n, m, origem, destino;
       cin >> n >> m;

       vector<vector<int>> grafo;
       grafo.resize(n+1);

       for(int i=0 ; i<m ; i++) {
              int u, v;
              cin >> u >> v;

              grafo[u].push_back(v);
              grafo[v].push_back(u);
       }

       bfs(grafo, origem, n);
}
