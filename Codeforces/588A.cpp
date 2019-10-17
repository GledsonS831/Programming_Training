#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, kg, preco; cin>>n;
    int menor_precoKg = 0;
  
    
    int custo_min = 0;
    for(int i = 0; i < n; i++){
        
        cin>>kg;
        cin>>preco;
        if(i == 0){
            menor_precoKg = preco;    
        }

        if (preco < menor_precoKg){
            menor_precoKg = preco;
        }
        custo_min += kg * menor_precoKg;
    }
    cout<<custo_min<<endl;
   
}