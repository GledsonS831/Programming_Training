#include <stdlib.h>
#include <stdio.h>

int compara(const void *p1, const void *p2){
  int *v1 = (int*)p1;
  int *v2 = (int*)p2;
  if(*v1 > *v2){
    return -1;
  }
  else return 1;
}

int main() {
    int n, m, odd, size_aux, k;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
      scanf("%d", &m);
      int vet[m];
      size_aux = 0;
      for(int j = 0; j < m; j++){
        scanf("%d", &odd);
        if(odd % 2 != 0){
          vet[size_aux] = odd;
          size_aux++;
        }
      }
      qsort(vet, size_aux, sizeof(int), compara);
      for(int j = 0, k = size_aux -1; j <= k || k > j; j++, k--){
        if(j == k){
          printf("%d", vet[j]);
          break;
        }
        else if(k - j == 1){
          printf("%d %d", vet[j], vet[k]);
        }
        else{
          printf("%d %d ", vet[j], vet[k]);
        }
      }
      printf("\n");
    }
    return 0;
}
