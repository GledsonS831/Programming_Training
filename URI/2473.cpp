#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int escolhos[100]={};
  int sorteados[100]={};
  int n;
  for(int i = 0; i < 6; i++){
    cin>>n;
    escolhos[n] = n;
  }
  for(int i = 0; i < 6; i++){
    cin>>n;
    sorteados[n] = n;
  }
  int acertados = 0;
  for(int i = 1; i < 100; i++){
    if(escolhos[i] == sorteados[i] && escolhos[i] != 0 && sorteados[i] != 0){
      acertados++;
    }
  }
  if(acertados==6) cout<<"sena"<<endl;
  else if(acertados==5)cout<<"quina"<<endl;
  else if(acertados==4)cout<<"quadra"<<endl;
  else if(acertados==3)cout<<"terno"<<endl;
  else cout<<"azar"<<endl;
}