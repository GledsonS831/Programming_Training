#include <stdio.h>
#include <math.h>

void main(){
	double x1, y1, x2, y2, v;
	scanf("%lf%lf", &x1, &y1);
	scanf("%lf%lf", &x2, &y2);
	
	v = pow(pow((x2-x1), 2) + pow((y2 - y1), 2), 0.5);
		
	printf("%.4lf\n", v);
}