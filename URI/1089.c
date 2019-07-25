#include <stdio.h>

int main(){
	int n = 1, i = 0, picos = 0;
	while(1){
		scanf("%d", &n);
		
		if(n == 0) break;
		i = 0, picos = 0;
		
		int magnitude[n+2];
		for(i = 1; i<n+1; i++)
			scanf("%d", &magnitude[i]);
	
		magnitude[0] = magnitude[n];
		magnitude[n+1] = magnitude[1];
		
		if(n == 2){
			if(magnitude[1] != magnitude[2])
				picos = 2;
		} else {
			for(i = 1; i<n+1; i++){
				if((magnitude[i] < magnitude[i-1] && magnitude[i] < magnitude[i+1]) 
				|| (magnitude[i] > magnitude[i-1] && magnitude[i] > magnitude[i+1]))
					picos++;		
			}
		}
		
		printf("%d\n", picos);
	}
	
	
	
}