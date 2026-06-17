#include <bits/stdc++.h>
using namespace std;

vector<int> bfs (vector<vector<int>> &grafo, int origem, int n) {
       vector<bool> visitados;
       vector<int> distancias;
       queue<int> fila;

       visitados.assign(n+1, false);
       distancias.assign(n+1, -1);

       fila.push(origem);
       visitados[origem] = true;
       distancias[origem] = 0;

       while(!fila.empty()) {
              int atual = fila.front();
              fila.pop();

              for(int vizinho : grafo[atual]) {
                     if(!visitados[vizinho]) {
                            visitados[vizinho] = true;
                            distancias[vizinho] = distancias[atual] + 1;
                            fila.push(vizinho);
                     }
              }
       }
       return distancias;
}

int main () {
       int n, m, origem, destino;
       cin >> n >> m;

       vector<int> distancias;
       vector<vector<int>> grafo;
       grafo.resize(n+1);

       for(int i=0 ; i<m ; i++) {
              int u, v;
              cin >> u >> v;

              grafo[u].push_back(v);
              grafo[v].push_back(u);
       }

       cin >> origem >> destino;
       distancias = bfs(grafo, origem, n);

       cout << "A distância entre " << origem << " e " << destino << " é " << distancias[destino] << "\n";
}
