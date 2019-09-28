#include <bits/stdc++.h>

using namespace std;
bool verifica_2(int l[], int m, int n, int valor){
    int soma = 0;
   
    for(int j = 0; j < 4; j++){

        if(j != m && j != n){

            soma += l[j];
        }

    }   
    if(soma == valor)return true;
    else return false;
}

bool verifica(int l[]){
    int soma = 0, soma2 = 0;
    for(int i = 0; i < 4; i++){

        soma = l[i];
        soma2 = 0;
        for(int j = 0; j < 4; j++){

            if(i != j) {
                soma += l[j];
                soma2 += l[j];
             
                if(verifica_2(l, i, j, soma))return true;
                soma = l[i];                  
            }

        }
        if(soma2 == soma)return true;
    }
    return false;
    
}
int main(){
    int l[4], n;
    for(int i = 0; i < 4; i++){
        cin>>n; l[i] = n;
    }
    if(verifica(l))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}