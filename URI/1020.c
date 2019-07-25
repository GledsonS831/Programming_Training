#include <stdio.h>

void main(){
	int idade = 0;
  int ano = 0;
  int mes = 0;
  int dia = 0;

  scanf("%d", &idade);

  if (idade >= 365){
  ano = idade / 365;
  idade = idade % 365;
  }
  if (idade >= 30 && idade < 365){
    mes = idade / 30;
    idade = idade % 30;
  }
  dia = idade;
  printf("%d ano(s)\n", ano);
  printf("%d mes(es)\n", mes);
  printf("%d dia(s)\n", dia);
  return 0;
}