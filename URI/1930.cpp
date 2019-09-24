#include <bits/stdc++.h>
using namespace std;

int qnt_ciclos(string cod, int tam_s, int tam_proc){
  int count = 0;
  int proc = 0;
  for(int i = 0; i < tam_s; i++){
    if(cod[i] == 'R'){
      if(count == 0)proc++;
      count++;
      if(count == tam_proc)count = 0;
    }
    else{
      proc++;
      count = 0;
    }
  }
  return proc;
}

int main(){
  string codigo;
  int n;
  while(cin>>codigo){
    cin>>n;
    int tam = codigo.size();
    if(tam == 0)break;
    cout<<qnt_ciclos(codigo, tam, n)<<endl;
  }
}