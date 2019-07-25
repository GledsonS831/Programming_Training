#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int r;
    int l[3] = {a/2, b/3, c/5};
    int m = l[0];
    for(int i = 0; i < 3; i++){
      if(l[i] < m){
        m = l[i];
      }
    }
    printf("%d\n", m);
    return 0;
}