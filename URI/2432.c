#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

long long busca(long double vet[], int size, long double raio){
  int ini = 0, fim = size-1, m, resp = 0;
  while(ini <= fim){
    m = (ini+fim)/2;
    if(vet[m] >= raio){
      fim = m -1;
      resp = size - m;
    }
    else{
      ini = m + 1;
    }
  }
  return resp;
}

int main(){
  int c, t;
  double x, y;
  int r;
  long double *raio_c = (int*) malloc(100000*sizeof(long double));
  long double raio;
  long double lista_r[100000];
  long long p = 0;

  scanf("%d %d", &c, &t);
  for(int i = 0; i<c; i++){
    scanf("%d", &r);
    raio_c[i] = r;
  }
  for(int i = 0; i < t; i++){
    scanf("%lf %lf", &x, &y);
    raio = sqrt(pow(x, 2) + pow(y,2));
    lista_r[i] = raio;
  }

  for(int i = 0; i < t; i++){
    p += busca(raio_c, c, lista_r[i]);
  }
  printf("%lld\n", p);
  return 0;
}
