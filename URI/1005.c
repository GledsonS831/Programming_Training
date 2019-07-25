#include <stdio.h>


int main(){
	double a = 0, b = 0;
	scanf("%lf%lf", &a, &b);
	
	double med = ((a * 3.5) + (b * 7.5)) / 11;
	
	printf("MEDIA = %.5lf\n", med);
	
	return 0;
}
	