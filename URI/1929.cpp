#include <iostream>
using namespace std;

int main() {
  int lista[4];
  int n;
  for(int i = 0; i < 4; i++){
    cin>>n;
    lista[i] = n;
  }
  int r = 0;
  for(int i = 0; i < 4; i++){
    if(r){
      break;
    }
    n = lista[i];
    for(int j = 0; j < 4; j++){
      if(i != j){
        int soma = lista[j] + n;
        for(int k = 0; k < 4; k++){
          int dif = lista[j] - n;
          if(dif < 0){
            dif *= -1;
          }
          if(k != j && k != i){
            if(soma > lista[k] && lista[k] > dif){
              r = 1;
            }
          }
        }
      }
    }
  }
  if(r) cout<<"S"<<endl;
  else cout<<"N"<<endl;
}