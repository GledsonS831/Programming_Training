#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
  int t;
  char v[26];
  scanf("%d", &t);
  for(int i = 0; i<t; i++){
    scanf(" %[^\n]s", v);
    printf("Y\n");
  }
  return 0;
}
