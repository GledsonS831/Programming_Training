#include <stdio.h>

int main(){
	double r = 0, volume = 0;
	scanf("%lf", &r);
	volume = (4 * (3.14159) * (r*r*r)) / 3;
	
	printf("VOLUME = %.3lf\n", volume);
	
	return 0;
}