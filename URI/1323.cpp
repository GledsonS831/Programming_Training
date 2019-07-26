#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int main() {
    int n;
    int soma;
    while(1){
        cin>>n;
    if(n == 0) break;
        soma = 1;
        for(int i = n; i >= 2; i--){
            soma += (i*i);
        }
        cout<<soma<<endl;
    }
}
