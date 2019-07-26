#include <iostream>
using namespace std;
int main() {
  string alfabeto = "abcdefghijklmnopqrstuvwxyz";
  string letras[26];
  for(int i = 0; i < 26; i++){
    letras[i] = alfabeto[i];
  }
  string permutacao;
  cin>>permutacao;
  string msg;
  cin>>msg;
  string l;
  
  for(int i = 0; msg[i]; i++){
    for(int j = 0; permutacao[j]; j++){
      if(msg[i] == permutacao[j]){
        cout<<letras[j];
        break;
      }
    }
  }
  cout<<endl;
}