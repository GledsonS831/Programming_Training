#include <stdio.h>

int main(){
	int lista[20], i = 0, n1 = 0, n2 = 0 , n3 = 0;
	scanf("%d%d%d", &n1, &n2, &n3);
	
	if (n1 >= n2 && n1 >= n3){
		if (n2 >= n3){
			printf("%d\n", n3);
			printf("%d\n", n2);
			printf("%d\n", n1);
		}
		else{
			printf("%d\n", n2);
			printf("%d\n", n3);
			printf("%d\n", n1);
		}
	}
	else if (n2 >= n3 && n2 >= n1){
		if (n1 >= n3){
			printf("%d\n", n3);
			printf("%d\n", n1);
			printf("%d\n", n2);
		}
		else{
			printf("%d\n", n1);
			printf("%d\n", n3);
			printf("%d\n", n2);
		}
	}
	else if (n3 >= n1 && n3 >= n2){
		if(n1 >= n2){
		printf("%d\n", n2);
		printf("%d\n", n1);
		printf("%d\n", n3);
		}
		else{
			printf("%d\n", n1);
			printf("%d\n", n2);
			printf("%d\n", n3);
		}
	}
	printf("\n");
	printf("%d\n", n1);
	printf("%d\n", n2);
	printf("%d\n", n3);
	
}