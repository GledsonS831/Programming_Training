#include <stdio.h>

int main(){
  int n, m, x, gols = 0, total = 0;
  scanf("%d %d", &n, &m);
  for(int i = 0; i< n; i++){
    for(int j = 0; j< m; j++){
      scanf("%d", &x);
      if(x != 0) gols++;

    }
    if(gols == m) total++;
    gols = 0;
  }
  printf("%d\n", total);
}
