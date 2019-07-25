#include "stdio.h"

int main(){
  int l, r;
  scanf("%d%d", &l, &r);
  if(l % 2 == 1 && r % 2 == 1) printf("%d\n", 1);

  else if(l % 2 == 1 && r % 2 == 0) printf("%d\n", 0);

  else if(l % 2 == 0 && r % 2 == 0) printf("%d\n", 1);

  else printf("%d\n", 0);

  return 0;
}
