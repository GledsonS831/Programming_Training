#include <iostream>
#include <map>
using namespace std;
int main() {
  map<int, char> gabarito;
  gabarito[0] = 'A';
  gabarito[1] = 'B';
  gabarito[2] = 'C';
  gabarito[3] = 'D';
  gabarito[4] = 'E';
  while(1){
    int n;
    cin>>n;
    if(n == 0) break;
    for(int i = 0; i < n; i++){
      int qnt_preto = 0;
      int resp = -1;
      int eh = 1;
      for(int i = 0; i < 5; i++){
        int v;
        cin>>v;
        if(v <= 127){
          qnt_preto += 1;
          resp = i;
        }
        if(qnt_preto > 1  && eh){
          eh = 0;
        }
      }
      if(qnt_preto == 0) eh = 0;
      if(eh){
        cout<<gabarito[resp]<<endl;
      }
      else if(eh == 0){
        cout<<"*"<<endl;
      }
      
    }
  }
}