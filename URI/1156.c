#include <stdio.h>
#include <locale.h>
int main(){
	double i =0, x = 2.0, s= 1.0;
	
	for(i=3; i<= 39; i += 2){
		s += i/x;
		x *= 2;
		}
	printf("%.2lf\n", s);
	
	return 0;
}