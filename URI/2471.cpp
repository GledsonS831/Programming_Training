#include <iostream>
#include <cstdlib>
using namespace std;
int descobre_m(int n, int **matriz){
  int m = 0;
  int soma_linha = 0;
  int soma_coluna = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      soma_linha += matriz[i][j];
      soma_coluna += matriz[j][i];
    }
    if(soma_linha == soma_coluna){
      m = soma_linha;
      return m;
    }
  soma_linha = 0;
  soma_coluna = 0;
  }
  return -1;
}

int main() {
  int n;
  cin>>n;
  int **matriz = (int**) malloc(10000*sizeof(sizeof(int*)));
  for(int i = 0; i < n; i++){
    matriz[i] = (int*) malloc(10000*sizeof(int));
  }
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      int num;
      cin>>num;
      matriz[i][j] = num;
    }
  }
  int m = descobre_m(n, matriz);
  int soma_linha = 0;
  int linha_e = 0;
  int soma_coluna = 0;
  int linha_c = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      soma_linha += matriz[i][j];
      soma_coluna += matriz[j][i];
    }
    if(soma_linha != m){
      linha_e = i;
    }
    if(soma_coluna != m){
      linha_c = i;
    }
    soma_linha = 0;
    soma_coluna = 0;
  }
  int resto = 0;
  for(int i = 0; i < n; i++){
    if(matriz[linha_e][i] != matriz[linha_e][linha_c]){
      resto += matriz[linha_e][i];
    }
  }
  int dif = abs(m - resto);
  cout<<dif<<" "<<matriz[linha_e][linha_c]<<endl;
}