#include <stdio.h>

int main(){
	int a = 0, i = 0;
	double b = 0, c = 0;
	double price = 0;
	for(i = 0; i < 2; i++){
		scanf("%d%lf%lf", &a, &b, &c);
		price = price +(b*c);
	}
	
	printf("VALOR A PAGAR: R$ %.2lf\n", price);
	
	return 0;
}