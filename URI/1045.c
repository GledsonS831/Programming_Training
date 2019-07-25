#include <stdlib.h>
#include <stdio.h>

int compare(const void *a, const void *b) {
    double *va = (double*)a;
    double *vb = (double*)b;
    if(*va > *vb){
      return -1;
    }
    else{
      return 1;
    }
}

int main() {
    double vet[3];
    for(int i = 0; i < 3; i++){
      scanf("%lf", &vet[i]);
    }
    qsort(vet, 3, sizeof(double), compare);
    if(vet[0] >= (vet[1] + vet[2])){
      printf("NAO FORMA TRIANGULO\n");
      return 0;
    }
    if((vet[0] * vet[0]) == ((vet[1]*vet[1]) + (vet[2]*vet[2]))){
      printf("TRIANGULO RETANGULO\n");
    }
    if((vet[0] * vet[0]) > ((vet[1]*vet[1]) + (vet[2]*vet[2]))){
      printf("TRIANGULO OBTUSANGULO\n");
    }
    if((vet[0] * vet[0]) < ((vet[1]*vet[1]) + (vet[2]*vet[2]))){
      printf("TRIANGULO ACUTANGULO\n");
    }
    if(vet[0] == vet[1] && vet[1] == vet[2]){
      printf("TRIANGULO EQUILATERO\n");
    }
    if((vet[0] == vet[1] && vet[1] != vet[2]) || (vet[0] != vet[1] && vet[1] == vet[2])){
      printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
