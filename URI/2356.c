#include <stdio.h>

int main(){
  char dna[1000];
  char cod[1000];
  while(scanf("%s", dna) != EOF){
    scanf("%s", cod);
    int i = 0, j = 0, k = 0;
    int x = 0, count  = 0, maior = 0;

    for(i = 0; dna[i] != '\0'; i++){
      if(dna[i] == cod[0]){
        for(j = i, k = 0; cod[k] != '\0'; j++, k++){
          if(cod[k] == dna[j]){
            x = 1;
          }
          else if (cod[k] != dna[j]){
              x = 0;
              break;
            }
          }
        }
        if(x == 1) break;
      }
      if(x) printf("Resistente\n");
      else printf("Nao resistente\n");
    }
  return 0;
}
