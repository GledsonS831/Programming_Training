#include <iostream>
using namespace std;

void print(int l[][1000], int a){
  for(int i = 0; i < a; i++){
    for(int j = 0; j < 2; j++){
      cout<<l[i][j]<<" ";
    }
    cout<<endl;
  }
}

int* retira_repetido(int l[][1000], int a){
  int aresta[2] = {l[0][0], l[0][1]};
  int aux[2];
  for(int i = 0; i < a; i++){
    aresta[0] = l[i][0];
    aresta[1] = l[i][1];
    for(int j = 0; j < a; j++){
      if(i != j){
        aux[0] = l[j][0];
        aux[1] = l[j][1];
        if(aux[0] == aresta[1] && aux[1] == aresta[0]){
          l[i][0] = -1;
          l[i][1] = -1;
        }
        if(aux[0] == aresta[0] && aux[1] == aresta[1]){
          l[i][0] = -1;
          l[i][1] = -1;
        }
      }
    }
  }
  return *l;
}

int* remove_aresta(int l[][1000], int a, int fonte){
  int aresta[2];
  for(int i = 0; i < a; i++){
    aresta[0] = l[i][0];
    aresta[1] = l[i][1];
    
    if(aresta[0] == fonte || aresta[1] == fonte){
      
      l[i][0] = -1;
      l[i][1] = -1;
    }
  }
  
  return *l;
} 

int main() {
  int t, inicio;
  int v, a;
  cin>>t;
  for(int i = 0; i < t; i++){
    int l[1000][1000];
    cin>>inicio;
    cin>>v>>a;
    for(int j = 0; j < a; j++){
      cin>>l[j][0];
      cin>>l[j][1];
    }
    retira_repetido(l, a);
    
    int qnt_caminho = 0;
    int qnt_a = a;
    bool pode = true;
    while(1){
        if(pode == false){
          remove_aresta(l, a, inicio); 
          break;
        }
        pode = false;
        for(int j = 0; j < v; j++){
          int count = 0;
          int fonte = 0;
          for(int k = 0; k < a; k++){
            if(l[k][0] != -1 && l[k][1] != -1){
              if(l[k][0] == j || l[k][1] == j){
                count++;
              }
            }
          }
          if(count == 1){
            if(j != inicio){
              pode = true;
              remove_aresta(l, a, j);
              qnt_caminho+=2;
              
            }
            
          }
      }
    }
    cout<<qnt_caminho<<endl;
  }
  
  
}