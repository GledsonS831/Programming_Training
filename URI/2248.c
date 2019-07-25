#include <stdio.h>

int main(){
  int n = 1, c = 0, m =0, i = 0, j = 0, maior = 0, turma = 0, melhor_cod= 0;
	while(1){
		scanf("%d", &n);
	  	if(n == 0) break;
	  	turma++;
	  
		int cod[10000], med[10000];
		int maiores[10000];
		for(i=0; i<n; i++){
			scanf("%d%d", &cod[i], &med[i]);
			if(i==0){
				maior = med[i];
				melhor_cod = cod[i];
			}
			else{
				if(med[i] > maior){
					maior = med[i];
					melhor_cod  = cod[i];
				}
			}
		}
		int p = 0;
		p = 0;
		for(i=0; i<n; i++){
			if(med[i] == maior){
				maiores[p] = cod[i];
				p++;
			}
		} 	
		printf("Turma %d\n", turma);
		for(i=0; i<p; i++){
			printf("%d ", maiores[i]);
		}
		printf("\n\n");
	}
		
}
