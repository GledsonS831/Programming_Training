#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <map>
using namespace std;

int main() {
  int x;
  cin>>x;
  map<string , string[3]> lista;
  string nome, pres;
  for(int i = 0; i < x; i++){
    cin>>nome;
    for(int j = 0; j < 3; j++){
      cin>>pres;
      lista[nome][j] = pres;
    }
  }
  string nome1, pres1;
  int eh = 0;
  while(cin>>nome1 && cin>>pres1){
    eh = 0;
    for(int i = 0; i < 3; i++){
      if(lista[nome1][i] == pres1){
        eh = 1;
        break;
      }
    }
    if(eh) cout<<"Uhul! Seu amigo secreto vai adorar o/"<<endl;
    else cout<<"Tente Novamente!"<<endl;
  }
}