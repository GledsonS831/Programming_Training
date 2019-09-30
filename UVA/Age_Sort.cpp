#include <bits/stdc++.h>

using namespace std;
 
int comp(const void *a, const void *b){
    int *n1 = (int*)a;
    int *n2 = (int*)b;
    return *n1 - *n2;
}

int main(){
    int n;
    while(1){
        int lista[2000000];
        scanf("%d", &n);
        if(!n)break;
        for(int i = 0; i < n; i++){
            scanf("%d", &lista[i]);   
        }
        qsort(lista, n, sizeof(int), comp);
        for(int i = 0; i < n; i++){
            if(i == n-1)printf("%d", lista[i]);
            else printf("%d ", lista[i]);
        }
        cout<<endl;
    }
}