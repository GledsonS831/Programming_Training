#include <stdio.h>

long long maior(long long v[], int size){
  long long m = v[0];
  for(int i = 0; i<size; i++){
    if(v[i] > m) m = v[i];
  }
  return m;
}

int main(){
  int n, k;
  long long vet[10000];
  long long m;
  scanf("%d%d", &n, &k);
  for(int i = 0; i<k; i++){
    scanf("%lld", &vet[i]);
  }
  m = maior(vet, k);
  long long soma = 0;
  while(soma != n){
    if(soma >= n) break;
    else{
      m--;
      soma=0;
    }
    for(int i = 0; i< k; i++){
      soma += vet[i] / m;
    }
  }
  printf("%lld\n", m);
}
