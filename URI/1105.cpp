#include <iostream>
using namespace std;
int main() {
  int qnt_bancos, n, credor, devedor, valor;
  while(1){
    cin>>qnt_bancos>>n;
    if(qnt_bancos == 0 && n == 0) break;
    int bancos[qnt_bancos+1];
    for(int i = 1; i < qnt_bancos+1; i++){
      int v;
      cin>>v;
      bancos[i] = v;
    }
    for(int i = 0; i < n; i++){
      cin>>devedor>>credor>>valor;
      bancos[devedor] -= valor;
      bancos[credor] += valor;
    }
    int resp = 1;
    for(int i = 1; i < qnt_bancos+1; i++){
      if(bancos[i] < 0){
        resp = 0;
        break;
      }
    }
    if(resp) cout<<"S"<<endl;
    else cout<<"N"<<endl;
  } 
}