#include <iostream>
using namespace std;
int criando(int lista[][102], int n){
  for(int i = 0; i < n+2; i++){
    for(int j = 0; j < n+2;j++){
      if(i == 0 || j == 0 || i==n+1|| j ==n+1){
        lista[i][j] = -1;
      }
    }
  }
  return lista[101][101];
}
int bandeira(int lista[][102], int x, int y, int aux[][102]){
  int count = 0; 
    if(lista[x][y] == -2){
        if(lista[x][y+1] != -1 && lista[x][y+1] != -2 && aux[x][y+1] >= aux[x][y]){
          count++;
          lista[x][y+1] = -2;
          
        }
        if(lista[x+1][y] != -1 && lista[x+1][y] != -2 && aux[x+1][y] >= aux[x][y]){
          count++;
          lista[x+1][y] = -2;
          
        }
        if(lista[x][y-1] != -1 && lista[x][y-1] != -2 && aux[x][y-1] >= aux[x][y]){
          count++;
          lista[x][y-1] = -2;
          
        }
        if(lista[x-1][y] != -1 && lista[x-1][y] != -2 && aux[x-1][y] >= aux[x][y]){
          count++;
          lista[x-1][y] = -2;
          
        }      
      }  
 
  return count;
}
int main() {
  int n;
  int x, y;
  int lista[102][102]= {};
  cin>>n;
  cin>>x>>y;
  criando(lista, n);
  for(int i = 1; i < n+1; i++){
    for(int j = 1; j < n+1; j++){
      int num;
      cin>>num;
      lista[i][j] = num;
    }
  }
  int aux[102][102];
  for(int i = 0; i < n+2; i++){
    for(int j = 1; j < n+2; j++){
      int num = lista[i][j];
      aux[i][j] = num;
    }
  }
  lista[x][y] = -2;
  int resp = 1;
  for(int i = 1; i < n+1; i++){
    for(int j = 1; j < n+1; j++){
      int atual = resp;
      resp += bandeira(lista, i, j, aux);
      if(resp > atual){
        i = 1;
        j = 1;
        atual = resp;
      }
    }
  }
  cout<<resp<<endl;
}