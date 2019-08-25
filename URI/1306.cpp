#include <iostream>
using namespace std;

int main() {
  int  estradas = 1, numeros = 1;
 int resp;
  int caso = 0;
  while(1){
    cin>>estradas>>numeros;
    if(estradas == 0 && numeros == 0)break;
    cout<<"Case "<<++caso<<": ";
    if(estradas > numeros * 27){
      cout<<"impossible"<<endl;
    }
    else{
      resp = estradas/numeros;
      if(estradas % numeros  == 0){
       resp -= 1;
      }
      cout<<resp<<endl;
    }

    
  }
}
