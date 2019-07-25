#include <stdio.h>
#include <locale.h>
void main(){
	int a = 0;
	int b = 0;
	int j = 0;
	int r = 0;
	int c = 0;
	int count_a = 0;
	int count_b = 0;
	
	while (1){
		scanf("%d", &r);
		if (r == 0){
			break;
		}
		count_a = 0;
		count_b = 0;
		j = 0;
		c = c + 1;
		for (j; j < r; j++){
			scanf("%d%d", &a, &b);
			count_a += a;
			count_b += b;
		}
		printf("Teste %d\n", c);
		if (count_a > count_b){
			printf("Aldo\n");
			}
		else{
			printf("Beto\n");
			}
		printf("\n");
		
		
	}
	
}