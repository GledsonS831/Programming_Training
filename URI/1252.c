#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <inttypes.h>

typedef struct{
  int32_t mod;
  int32_t num;
} lista;
int compara(const void *p1, const void *p2){
    lista *v1 = (lista*) p1;
    lista *v2 = (lista*) p2;
    if(v1->mod < v2->mod){
      return -1;
    }
    else if(v1->mod > v2->mod){
      return 1;
    }
    else{
      if(v1->num % 2 != 0 && v2->num % 2 == 0) return -1;
      else if(v1->num % 2 == 0 && v2->num % 2 != 0) return 1;
      else if(v1->num % 2 != 0 && v2->num % 2 != 0){
        if(v1->num > v2->num) return -1;
        else{
          return 1;
        }
      }
      else if(v1->num % 2 == 0 && v2->num % 2 == 0){
        if(v1->num < v2->num) return -1;
        else return 1;
      }
    }
}
int main(){
  int n, m;
  int32_t v;

    while(1){
      scanf("%d %d", &n,&m);
      lista modulos[n];
      if(n == 0 && m == 0){
        printf("%d %d\n", 0, 0);
        break;
      }
      else{
        printf("%d %d\n", n, m);
        for(int i = 0; i < n; i++){
          scanf("%d", &v);
          modulos[i].mod = v % m;
          modulos[i].num = v;
        }
        qsort(modulos, n, sizeof(lista), compara);
        for(int i = 0; i<n; i++){
          printf("%d\n", modulos[i].num);
        }
      }
    }

}
