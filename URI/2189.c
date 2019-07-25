#include <stdio.h>
int main(){
  int n = 0;
  int count = 0;
	while (1){
    int i = 0;
    int j = 0;
    scanf("%d", &n);
    if (n == 0){
      break;
    }
    count = count + 1;
    int lista[n];
    for (i; i < n; i++){
      scanf("%d", &lista[i]);
    }

    for (j; j < n; j++){
      if (j+1 == lista[j]){
        printf("Teste %d\n", count);
        printf("%d\n\n", j+1);
      }
    }

  }
  return 0;
}