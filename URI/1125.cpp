#include <iostream>

using namespace std;

int main() {
  int qnt_grandprix, qnt_competidores, qnt_sistema, k, k_esimo;
  int lista_pilotos[100][100];
  while(cin>>qnt_grandprix>>qnt_competidores && qnt_grandprix != 0 && qnt_competidores != 0){
    
    for(int i =0; i < qnt_grandprix; i++){
      for(int j = 0; j < qnt_competidores; j++){
        int num = 0;
        cin >> num;
        lista_pilotos[i][j] = num;
      }
    }
    
    
	cin >> qnt_sistema;
    for(int i = 0; i < qnt_sistema; i++){
      cin >> k;
      int maior_pontuacao = 0;
      int pontos_pilotos[100] = {};
      
      for(int j = 0; j < k; j++){
        cin >> k_esimo;
        
        for(int l = 0; l < qnt_grandprix; l++){
          for(int m = 0; m < qnt_competidores; m++){
          	
            if(lista_pilotos[l][m] == j+1){
              pontos_pilotos[m] += k_esimo;
              
              if (pontos_pilotos[m] > maior_pontuacao){
                maior_pontuacao = pontos_pilotos[m];
              }
              
            }
          }
        }
      }
      int aux = 1;
      for(int n = 0; n < qnt_competidores; n++){
        if(pontos_pilotos[n] == maior_pontuacao){
        	if (aux){
        		cout<<n+1;
        		aux = 0;
        		continue;
			}
          cout<<" "<<n+1;
        }
      }
      cout<<endl;
    }

  }
}