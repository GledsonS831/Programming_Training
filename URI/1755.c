#include <stdio.h>
#include <string.h>

int main(){
	int t = 0, n = 0, i = 0, j = 0, k = 0, resto = 0,d = 0;
	double troco = 0, maior_troco = 0;
	scanf("%d", &t);
	
	for(i = 0; i<t; i++){
		scanf("%d%d", &d, &n);
		double marca[n];
		for(j = 0; j<n; j++){
			scanf("%lf", &marca[j]);
		}
		for(k = 0; k<n; k++){
			if (marca[k] <= d){
				resto =  d / marca[k];
				troco = d - (marca[k] * resto);
				//printf("%lf", troco);
			}
			if(troco > maior_troco){
				maior_troco = troco;
			}
		}
		printf("%.2lf\n", maior_troco);
		maior_troco = 0;
		troco = 0;
	}
	
	return 0;
	}
	
	
