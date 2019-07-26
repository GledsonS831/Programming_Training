#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;
typedef struct{
  char cores[100];
  char tipo[100];
  char nome[100];
}Camisa;

int compara(const void *p1, const void *p2){
  Camisa *c1 = (Camisa*)p1;
  Camisa *c2 = (Camisa*)p2;
  int t1 = c1->cores[0];
  int t2 = c2->cores[0];
  if(t1 != t2){
    return t1-t2; 
  }
  else{
    
    t1 = c1->tipo[0];
    t2 = c2->tipo[0];

    if( t1 != t2){
      return t2-t1; 
    }
    else{
      int menor;
      t1 = strlen(c1->nome);
      t2 = strlen(c2->nome);
      if(t1 < t2) menor = t1;
      else menor = t2;
      for(int i = 0; i < menor; i++){
        if(c1->nome[i] != c2->nome[i]){
          int v1 = c1->nome[i];
          int v2 = c2->nome[i];
          return v1-v2;
        }
      }
      return t1-t2;
    }
  }
}

int main() {
  Camisa c[10000];
  int n;
  bool first = true;
  while(1){
    cin>>n;
    if(n==0) break;

    for(int i = 0; i < n; i++){
      scanf(" %[^\n]s", c[i].nome);
      scanf("%s", c[i].cores);
      scanf("%s", c[i].tipo);
    }
  
    qsort(c, n, sizeof(Camisa), compara);
    if(!first){
      cout<<endl;
    }
    first = false;
    for(int i = 0; i < n; i++){
      cout<<c[i].cores<<" "<<c[i].tipo<<" "<<c[i].nome<<endl;
    }
    
  }
}