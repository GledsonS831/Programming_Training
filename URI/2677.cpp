#include <bits/stdc++.h>
using namespace std;


void calc_distancia(int *lista, int tam, int *distancia_esq, int *distancia_dir){
    int count = 0;
    for(int i = 0; i < tam; i++){
        if(lista[i] % 2 == 0){
            count = 0;
            distancia_dir[i] = count;
        }
        else{
            count++;
            distancia_dir[i] = count;
        }
    }
    count = 0;
    for(int i = tam-1; i >= 0; i--){
        if(lista[i] % 2 == 0){
            count = 0;
            lista[i] = count;
        }
        else{
            count++;
            distancia_esq[i] = count;
        }
    }
}
int resp(int tam, int *distancia_esq, int *distancia_dir){
    int ini = 0;
    int fim = tam-1;
    int count_valores = 0;
    bool j1 = true;
    while(ini < fim){
        if(distancia_esq[ini] == 0){
            if(j1){
                count_valores++;
              
            }
            ini++;
        }
        else if(distancia_dir[fim] == 0){
            if(j1){
                count_valores++;
         
            }
            fim--;
        }
        else if(distancia_esq[ini] > distancia_dir[fim]){
          
            ini++;
        }
        else if(distancia_esq[ini] <= distancia_dir[fim]){
            
            fim--;
        }
        j1 = !j1;
    }
    return count_valores;
}
int main(){
    int n;
    int lista[100000];
    while(1){
        cin>>n;
        if(!n)break;
        int tam = n*2;
        int distancia_esq[100000] = {};
        int distancia_dir[100000] = {};
        for(int i = 0; i < tam; i++){
            cin>>n;
            lista[i] = n;
        }
        calc_distancia(lista, tam, distancia_esq, distancia_dir);
        cout<<resp(tam, distancia_esq, distancia_dir)<<endl;
        
    }
}