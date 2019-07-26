#include <iostream>
#include <cstdio>
using namespace std;
int main() {
  int n;
  int qnt_p, qnt_salto;
  cin>>n;
  int count, salto_aux, qnt_morto;
  for(int i = 0; i < n; i++){
    cin>>qnt_p>>qnt_salto;
    int lista[qnt_p+1];
    salto_aux = 0;
    count = 0;
    qnt_morto = 0;
    for(int i = 0; i < qnt_p; i++){
      lista[i] = i;
    }
    while(qnt_morto != qnt_p-1){
      if(lista[count] != -1){
        salto_aux++;
      }
      if(salto_aux == qnt_salto){
        lista[count] = -1;
        qnt_morto++;
        salto_aux = 0;
      }
      count++;
      if(count == qnt_p) count = 0;
    }
    int resp;
    for(int i = 0; i < qnt_p; i++){
      if(lista[i] != -1){
        resp = lista[i]+1;
      }
    }
    printf("Case %d: %d\n", i+1, resp);
  }
}