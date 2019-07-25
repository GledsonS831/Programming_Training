#include <stdio.h>

int main(){
	double a = 0, b = 0, c = 0;
	scanf("%lf%lf%lf", &a, &b, &c);
	
	double med = ((a * 2) + (b * 3) +(5*c)) / 10;
	
	printf("MEDIA = %.1lf\n", med);
	
	return 0;
}