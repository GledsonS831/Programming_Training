#include <stdio.h>

int main(void) {
  int graus = 0, min = 0;
  while (scanf("%d", &graus) != EOF){
    min = graus*2;
    min = min % 60;
    if (min % 12 == 0) printf("Y\n");
    else printf("N\n");
    min = 0;
  }
  return 0;
}