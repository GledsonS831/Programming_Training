#include <stdio.h>

void main(){
	int a, b;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	double d = a * b;
	double l = d/12;	
	printf("%.3lf\n", l);
}