#include <stdio.h>
#include <math.h>

int main(){
	double a  = 0, b = 0, c = 0, delta = 0, x1 = 0, x2 = 0;
	scanf("%lf%lf%lf", &a, &b, &c);
	
	delta = (b*b) - (4*a*c);
	x1 = (-b + pow(delta, 0.5)) / (2*a);
	x2 = (-b - pow(delta, 0.5)) / (2*a);
	
	if(delta < 0 || (2 * a)== 0) printf("Impossivel calcular\n");
	else printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);
	
	return 0;
}
	
