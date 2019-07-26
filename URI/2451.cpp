#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int n;
  cin>>n;
  string matriz[n];
  for(int i = 0; i < n; i++){
      string c;
      cin>>c;
      matriz[i] = c;
  }
  int comida = 0;
  int maior = 0;
  for(int i = 0; i < n; i++){
    if(i % 2 == 0){
      for(int j = 0; j < n; j++){
        if(matriz[i][j] == 'o'){
          comida++;
        }
        if(comida > maior){
          maior = comida;
        }
        else if(matriz[i][j] == 'A'){
          comida = 0;
        }
      }
    }
    else{
      for(int j = n-1; j >= 0; j--){
        if(matriz[i][j] == 'o'){
          comida++;
        }
        if(comida > maior){
          maior = comida;
        }
        else if(matriz[i][j] == 'A'){
          comida = 0;
        }
      }
    }
  }
    cout<<maior<<endl;
  
}