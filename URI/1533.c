#include <stdio.h>
#include <string.h>

int main() {
	int n = 1;
	
	while(1){
		scanf("%d", &n);
		if (n == 0) break;
		
		int i = 0, bigger = 0, index_big = 0, second_big = 0, second = 0;
		int killers[n];
		second = 0;
		second_big = 0;
		bigger = 0;
		index_big = 0;
		
		for(i = 0; i<n; i++){
			scanf("%d", &killers[i]);
			if(killers[i] > bigger){
				bigger = killers[i];
				index_big = i;
			}
		}
		
		killers[index_big] = 0;
		
		for(i=0; i<n; i++){
			if(killers[i] > second_big){
				second_big = killers[i];
				second = i+1;
			}
		}
		
		printf("%d\n", second);
	}
	
	return 0;
}