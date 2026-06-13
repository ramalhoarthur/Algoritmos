#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;

void visita (vector<vi> &G, int i, vi &visitados, vi &res) {

       res.push_back(i);
       for(int j : G[i]) {
              if(!visitados[j]) {
                     visita(G, j, visitados, res);
              }
       }
       cout << i << "\n";
}

void dfs (vector<vi> &G) {
       vi visitados;
       vi res;

       for(int i=0 ; i<visitados.size() ; i++) {
              visitados[i] = 0;
       }
       for(int i=0 ; i<visitados.size() ; i++) {
              if(!visitados[i]){
                     visitados[i] = 1;
                     visita(G, i, visitados, res);
              }
       }
}

int main () {
       ios::sync_with_stdio(false);
       cin.tie(nullptr);

       return 0;
}