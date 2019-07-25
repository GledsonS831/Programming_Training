#include <stdio.h>

int main(){
	int a = 0, b = 0, c = 0, d = 0;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	int mult = ((a * b) - (c * d));
	
	printf("DIFERENCA = %d\n", mult);
	
	return 0;
}