#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

void bubble_sort (vi &lista) {
       bool troca;
       for(int i = 0 ; i < lista.size()-1 ; i++) {
              for(int j = 0 ; j < lista.size() - i - 1 ; j++) {

                     if(lista[j] > lista[j+1]) {
                            int aux  = lista[j];
                            lista[j] = lista[j+1];
                            lista[j+1] = aux;
                            troca = true;
                     }
              }
              if(!troca) break;
       }
}

int main () {
       vi lista;
       int tam;
       cin >> tam;
       for(int i = 0 ; i < tam ; i++) {
              int num;
              cin >> num;
              lista.push_back(num);
       }

       bubble_sort(lista);
       for(int i=0 ; i < tam ; i++) {
              cout << lista[i] << " ";
       }
       cout << "\n";
       return 0;
}