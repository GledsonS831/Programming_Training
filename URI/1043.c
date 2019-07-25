#include <stdio.h>
#include <locale.h>
void main(){
	float a = 0;
	float b = 0;
	float c = 0;
	setlocale(LC_ALL, "portuguese");
	scanf("%f%f%f", &a, &b, &c);
	
	if (a < b+c && b < c+a && c < a+b){
		printf("Perimetro = %.1f\n", a + b + c);
	} 
	else{
		printf("Area = %.1f\n", ((a+b)*c)/2);
	}
}