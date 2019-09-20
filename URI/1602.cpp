#include <bits/stdc++.h>
#include <math.h>
using namespace std;

bool *primos = (bool*)malloc(sizeof(bool)*2000000);
int *qnt_div = (int*)malloc(sizeof(int)*2000000);
int *resp = (int*)malloc(sizeof(int)*2000000);

int divisores(){

   for(int i = 2; i <= 2000000; i++){
       if(primos[i]){
           qnt_div[i] = 2; 
            for(int j = i + i; j <= 2000000; j+=i){
                primos[j] = false;
                int tam = j;
                int divs = 0;
                while(tam % i == 0){
                    tam = tam / i;
                    divs++;
                }
                
                if(qnt_div[j] == 0)qnt_div[j] = divs + 1;
                else qnt_div[j]  = qnt_div[j] * (divs+1);
            }
       }
   } 
}

void Resp(){
    int c = 1;
    for(int i = 2; i <= 2000000; i++){
        if(primos[qnt_div[i]]){
            resp[i] = c;
            c++;
        }
        else{
            resp[i] = c-1;
        }
    }
}

int main(){
    int n;
    
    memset(primos, true, 2000000);
    memset(qnt_div, 0, 2000000);
    memset(resp, 0, 2000000);
    divisores();
    Resp();
    while(cin>>n){
        cout<<resp[n]<<endl;
    }
    
}