#include <stdio.h>

int main(){
	double a, b;
	scanf("%lf%lf", &a, &b);
	if(a == 1)printf("Total: R$ %.2lf\n", (b*4));
	else if(a == 2) printf("Total: R$ %.2lf\n", (b*4.5));
	else if(a == 3) printf("Total: R$ %.2lf\n", (b*5));
	else if(a == 4) printf("Total: R$ %.2lf\n", (b*2));
	else if(a == 5) printf("Total: R$ %.2lf\n", (b*1.5));
	return 0;
}
