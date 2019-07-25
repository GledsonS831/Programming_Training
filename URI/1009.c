#include <stdio.h>

void main(){
	char nome[15];
	double a, b, v;
	
	scanf("%s", nome);
	scanf("%lf", &a);
	scanf("%lf", &b);
	
	v = a + (b*0.15);
	
	printf("TOTAL = R$ %.2lf\n", v);
}