#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  char frase[1001];
  scanf(" %[^\n]s", frase);
  bool imprime = false;
  for(int i = 0; frase[i]; i++){
    if(frase[i] == ' '){
      cout<<' ';
      imprime = false;
    } 
    else if(imprime){
      cout<<frase[i];
      imprime = false;
    }
    else{
      imprime = true;
    }
  }
  cout<<endl;
}