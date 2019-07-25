#include <stdio.h>

int main(){
	int a = 0, b = 0;
	double c = 0;
	scanf("%d%d%lf", &a, &b, &c);
	
	double hours_work = (b * c);
	
	printf("NUMBER = %d\nSALARY = U$ %.2lf\n", a, hours_work);
	
	return 0;
}