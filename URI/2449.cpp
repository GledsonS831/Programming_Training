#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int qnt_numeros, limite;
  cin>>qnt_numeros>>limite;
  int lista[qnt_numeros];
  for(int i = 0; i < qnt_numeros; i++){
    int n;
    cin>>n;
    lista[i] = n;
  }
  
  int resp = 0, dif;
  for(int i = 0; i < qnt_numeros -1; i++){
    dif = limite - lista[i];
    lista[i] += dif;
    lista[i+1] += dif;
    resp += abs(dif);
  }
  cout<<resp<<endl;
}