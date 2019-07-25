#include <stdio.h>

int main(){
	double km = 0, l = 0, consumption = 0;
	
	scanf("%lf%lf", &km, &l);
	
	consumption = km / l;
	
	printf("%.3lf km/l\n", consumption);
	return 0;
}