#include <stdlib.h>
#include <stdio.h>

int main() {
    int i, f, conv1, conv2;
    scanf("%d %d", &i, &f);
    conv1 = (i-24);
    conv2 = (24-(f + 24));
    if(i < f){
      printf("O JOGO DUROU %d HORA(S)\n", (f - i));
    }
    else{
      if(conv1 < 0){
        conv1 = conv1 * -1;
      }
      if(conv2 < 0){
        conv2 = conv2 * -1;
      }
      printf("O JOGO DUROU %d HORA(S)\n", conv1 + conv2);
    }
    return 0;
}
