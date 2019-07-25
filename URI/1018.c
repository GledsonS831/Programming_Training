#include <stdio.h>

void main(){
	int cedula =0;
	
	int nota_cem = 0;
	int nota_cinq = 0;
	int nota_vinte = 0;
	int nota_dez = 0;
	int nota_cinco = 0;
	int nota_dois = 0;
	int nota_um = 0;
	
	scanf("%d", &cedula);
	
	printf("%d\n", cedula);
	
	if (cedula >= 100){
		nota_cem = cedula/100;
		cedula = cedula % 100;
	}
	if (cedula >= 50 && cedula < 100){
		nota_cinq = cedula / 50;
		cedula = cedula % 50;
	}
	if (cedula >= 20 && cedula < 50){
		nota_vinte = cedula / 20;
		cedula = cedula % 20;
	}
	if (cedula >= 10 && cedula < 20){
		nota_dez = cedula / 10;
		cedula = cedula % 10;
	}
	if (cedula >= 5 && cedula < 10){
		nota_cinco = cedula / 5;
		cedula = cedula % 5;
	}
	if (cedula >= 2 && cedula < 5){
		nota_dois = cedula / 2;
		cedula = cedula % 2;
	}
	if (cedula >= 1 && cedula < 2){
		nota_um = cedula / 1;
	}
	printf("%d nota(s) de R$ 100,00\n", nota_cem);
	printf("%d nota(s) de R$ 50,00\n", nota_cinq);
	printf("%d nota(s) de R$ 20,00\n", nota_vinte);
	printf("%d nota(s) de R$ 10,00\n", nota_dez);
	printf("%d nota(s) de R$ 5,00\n", nota_cinco);
	printf("%d nota(s) de R$ 2,00\n", nota_dois);
	printf("%d nota(s) de R$ 1,00\n", nota_um);
	
}