#include <stdio.h>
#include <string.h>

int main(){
  double matriz[12][12];
  char sm[20];
  int n = 0, i = 0,  j= 0;
  double soma = 0;
  double media = 0;
  
  scanf("%d", &n);
  
  scanf("%s", sm);
  
  for(i=0; i<12; i++){
  	for(j=0; j<12; j++){
  		scanf("%lf", &matriz[i][j]);
  	}
  }

  for(i=0; i<12; i++){
    soma = soma + matriz[i][n];
  }
  media = soma / 12;
  
  if(strcmp(sm, "S") == 0){
    printf("%.1lf\n", soma);
  }
  else printf("%.1lf\n", media);
}
