#include <stdio.h>

long long soma(int num){
  long long soma = 0;
  
  for(int i = 1; i*i <= num; i++){
    if(num % i == 0){
      soma += i;
      if(i != (long long) num / i){
        soma += (long long)(num / i); 
      }
    }
  }
  return soma;
}
int main() {
  int casos, n;
  scanf("%d", &casos);
  for(int i = 0; i < casos; i++){
    scanf("%d", &n);
    printf("%lld\n", soma(n));
  }
}
