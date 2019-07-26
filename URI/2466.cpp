#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int lista[n];
  int aux[n];
  for(int i = 0; i < n; i++){
    int num;
    cin>>num;
    lista[i] = num;
    aux[i] = lista[i];
  }
  while(n>1){
    for(int i = 0; i < n-1; i++){
      if(lista[i] == lista[i+1]){
        aux[i] = 1;
        lista[i] = aux[i];
      }
      else{
        aux[i] = -1;
        lista[i] = aux[i];
      }
        
    }
    n--;
    
  }
  
  if(aux[0] == 1) cout<<"preta"<<endl;
  else cout<<"branca"<<endl;
}