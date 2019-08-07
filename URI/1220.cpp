#include <iostream>
#include <cstdio>
using namespace std;
long long inteiro(double m){
    long long n = m;
    return n;
}
long long parte_num(double m, int mult){
  long long i = inteiro(m);
  double d = m - i;
  double numero = i*mult+d*mult;
  long long r = numero;
  return r;
}

int main() {
  int n;
  while(1){
    int inteiro = 0, decimal = 0, l[100000];
    int soma = 0;
    double media = 0;
    cin>>n;
    if(n==0)break;
    for(int i = 0; i < n; i++){
      scanf("%d.%d", &inteiro, &decimal);
      l[i] = inteiro*100 + decimal;
      media += l[i];
    }
    media= (double)media / n;
   
    double menor = 0, maior = 0;
    for(int i = 0; i < n; i++){
      if(l[i] < media){
        menor += (int) (media - l[i]);
        
      }
      else{
        maior += (int) (l[i] - media);
        
      }
    }
    if(menor > maior)printf("$%.2lf\n", menor/100);
    else printf("$%.2lf\n", maior/100);
  }
}
