#include <stdio.h>

int main(){
	int n = 0, x = 0, y = 0, i = 0, j = 0, count = 0;
	scanf("%d", &n);
	
	for (i=0;i<n;i++){
		scanf("%d%d", &x, &y);
		
		for(j = x; j < (y*2)+x; j++){
			if (j%2 != 0){
				count = count + j;
			}
		}
		printf("%d\n", count);
		count = 0;
	}
	return 0;
}