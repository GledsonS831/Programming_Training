#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;
typedef struct{
  char nome[100];
  int peso;
  int idade;
  double altura;
}Rena;

int compara(const void *p1, const void *p2){
  Rena *c1 = (Rena*)p1;
  Rena *c2 = (Rena*)p2;
 
  if(c1->peso > c2->peso) return -1;
  else{
    if(c1->peso < c2->peso) return 1;
    else{
      if(c1->idade > c2->idade) return 1;
      else{
        if(c1->idade < c2->idade) return -1;
        else{
          if(c1->altura > c2->altura) return 1;
          else{
            if(c1->altura < c2->altura) return -1;
            else{
              int t1 = strlen(c1->nome);
              int t2 = strlen(c2->nome);
              return t2-t1;
            }
          }
        }      
      }
    }
  }
}

int main() {
  int n;
  int caso = 1;
  cin>>n;
  for(int i = 0; i < n; i++){
    int qnt_renas, renas_util;
    cin>>qnt_renas>>renas_util;
    Rena rena[qnt_renas];
    
    for(int j = 0; j < qnt_renas; j++){
      scanf("%s", rena[j].nome);
      scanf("%d", &rena[j].peso);
      scanf("%d", &rena[j].idade);
      scanf("%lf", &rena[j].altura);
    }
    
    qsort(rena, qnt_renas, sizeof(Rena), compara);
    printf("CENARIO {%d}\n", caso);
    for(int k = 0; k <  renas_util; k++){
      cout<<k+1<<" - "<<rena[k].nome<<endl;
    }
    caso++;
  }
}