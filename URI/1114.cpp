#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int main() {
  int n;

  while(1){
    cin>>n;
    if(n != 2002){
        cout<<"Senha Invalida"<<endl;
    }
    else{
        cout<<"Acesso Permitido"<<endl;
        break;
    }
  }

}
