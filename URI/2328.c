#include <stdio.h>

int main(){
    int n, cut, pieces = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &cut);
        pieces = pieces +  (cut - 1);
        
    }
    printf("%d\n", pieces);
    return 0;
}