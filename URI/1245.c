#include <stdio.h>
#include <string.h>

int main() {
	int n = 0, m = 0, i = 0, pares = 0;
	while(scanf("%d", &n) != EOF){
			int right[61];
			int left[61];
			for(i = 0; i<62; i++){
				right[i] = 0;
				left[i] = 0;
			}
			char foot[n];
	
			for(i = 0; i < n; i++){
				scanf("%d %s", &m, foot);
				if (strcmp(foot, "D") == 0){
					right[m]++;
					
				}
				if(strcmp(foot, "E") == 0){
					left[m]++;
				}
			}
		
			for(i = 30; i<61; i++){
				if(left[i] > 0 && right[i] > 0){
					if(left[i] <= right[i]){
						pares = pares + left[i];
					}
					else pares = pares + right[i];
					
				}
			}
			printf("%d\n", pares);
			pares = 0;
		}
		
	

  return 0;
}