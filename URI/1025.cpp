#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int busca(int n, int x, int vet[]){
  int i = 0;
  int f = n-1;
  int m = 0;
  int resp = -1;
  while(i <= f){
    m = (i + f)/2;
    if(vet[m] == x){
      resp = m;
      f = m-1;
    }
    else if(vet[m] < x){
      i = m+1;
    }
    else{
      f = m-1;
    }
  }
  return resp;
}
int compara(const void *p1, const void *p2){
  return *(int*)p1 - *(int*)p2;
}
int main() {
  int n, q, c = 0;
  while(1){
    cin>>n>>q;
    if(n == 0 && q == 0) break;
    int lista[n];
    
    for(int i = 0; i < n; i++){
      int v;
      cin>>v;
      lista[i] = v;
    }
    qsort(lista, n, sizeof(int), compara);
    c++;
    printf("CASE# %d", c);
    printf(":\n");
    for(int i = 0; i < q; i++){     
      int v;
      cin>>v;
      int ok = busca(n, v, lista);
      if(ok >= 0){
        printf("%d found at %d\n", v, ok+1);
      }
      else if(ok == -1){
        printf("%d not found\n", v);
      }
    }
  

  }
}