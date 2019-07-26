#include <iostream>
#include <cstdio>
using namespace std;

int main() {

  int tam;
  int qnt_alturas;
  int n;
  scanf("%d", &tam);
  for(int i = 0; i < tam; i++){
    int lista[231] = {};
    scanf("%d", &qnt_alturas);
    for(int j = 0; j < qnt_alturas; j++){
      int v;
      scanf("%d", &v);
      lista[v]++;
    }
    bool eh = false;
    for(int j = 20; j < 231; j++){
      if(lista[j] != 0){
        for(int k = 0; k < lista[j]; k++){
          if (eh){
            printf(" ");
          }
          eh = true;
          printf("%d", j);
        }
      }
    }
    printf("\n");
    
  }
}