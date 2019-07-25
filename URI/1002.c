#include <stdio.h>

int main(){
	double a = 0;
	scanf("%lf", &a);
	
	double area = 3.14159 *(a * a);
	
	printf("A=%.4lf\n", area);
	
	return 0;
}