#include <stdio.h>

int main(){
	int vetc[2001], t = 0, n = 0, i = 0, j = 0, maior = 0;
	
	scanf("%d", &t);
	
	for(i = 0; i < 2001; i++){
		vetc[i] = 0;
	}
	int vet[t];
	for(i = 0; i<t; i++){
		scanf("%d", &n);
		
		if (n > maior){
			maior = n;
		}
		vetc[n]++;
	}
	for(i = 0; i< 2001; i++){
		if(i != 0 && vetc[i] != 0){
			printf("%d aparece %d vez(es)\n", i, vetc[i]);
		}
	}
	
	return 0;
}