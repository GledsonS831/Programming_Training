#include <stdio.h>
#include <math.h>


int	main(){
	double n;
	scanf("%lf", &n);
	int resto = n;
	int nota =  resto;
	int moeda = (n-resto)*100;
	printf("NOTAS:\n");
	resto = resto / 100;
	nota = nota % 100;
	printf("%d nota(s) de R$ 100.00\n", resto);
	resto = nota / 100;
	if(nota >= 50 && nota < 100){
		resto = nota / 50;
		nota = nota % 50;
	}
	printf("%d nota(s) de R$ 50.00\n", resto);
	resto = nota / 50;
	if(nota >= 20 && nota < 50){
		resto = nota / 20;
		nota = nota % 20;
	}
	printf("%d nota(s) de R$ 20.00\n", resto);
	resto = nota / 20;
	if(nota >= 10 && nota < 20){
		resto = nota / 10;
		nota = nota % 10;
	}
	printf("%d nota(s) de R$ 10.00\n", resto);
	resto = nota / 10;
	if(nota >= 5 && nota < 10){
		resto = nota / 5;
		nota = nota % 5;
	}
	printf("%d nota(s) de R$ 5.00\n", resto);
	resto = nota / 5;
	if(nota >= 2 && nota < 5){
		resto = nota / 2;
		nota = nota % 2;
	}
	printf("%d nota(s) de R$ 2.00\n", resto);

	printf("MOEDAS:\n");

	resto = nota / 2;
	if(nota >= 1 && nota < 2){
		resto = nota / 1;
		nota = nota % 1;
	}

	printf("%d moeda(s) de R$ 1.00\n", resto);
	resto = nota / 1;
	if(moeda >= 50 && moeda < 100){
		resto = moeda / 50;
		moeda = moeda % 50;
	}
	printf("%d moeda(s) de R$ 0.50\n", resto);
	resto = nota / 25;
	if(moeda >= 25 && moeda < 50){
		resto = moeda / 25;
		moeda = moeda % 25;
	}
	printf("%d moeda(s) de R$ 0.25\n", resto);
	resto = nota / 10;
	if(moeda >= 10 && moeda < 25){
		resto = moeda / 10;
		moeda = moeda % 10;
	}
	printf("%d moeda(s) de R$ 0.10\n", resto);
	resto = nota / 5;
	if(moeda >= 5 && moeda < 10){
		resto = moeda / 5;
		moeda = moeda % 5;
	}
	printf("%d moeda(s) de R$ 0.05\n", resto);
	resto = nota / 1;
	if(moeda >= 1 && moeda < 5){
		resto = moeda / 1;
		moeda = moeda % 1;
	}
	printf("%d moeda(s) de R$ 0.01\n", resto);
	return 0;
}
