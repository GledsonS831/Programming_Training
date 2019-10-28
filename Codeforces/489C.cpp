#include <bits/stdc++.h>
#include <set>
using namespace std;

int main() {
  
  int digitos, num; cin >> digitos >> num;
  int l[digitos];
  int l_dig[10] = {};
  int aux = 9;
  int soma = num;

  int possivel = 0;
  for(int i = 0; i < digitos; i++){
    possivel += 9;
    if(num - aux >= 0){
      l[i] = aux;
      l_dig[aux]++;
      num -= aux;
    }
    else{
      aux = num;
      l_dig[aux]++;
      num -= aux;
      l[i] = aux;
    }
  }
  bool pode = true;
  if(soma <= possivel){
    if(soma == 0 && digitos == 1){
      cout<<0<<" "<<0<<endl;
    }
    else{
      if(soma == 0)cout<<-1<<" "<<-1<<endl;
      else{
        if(l[digitos-1] == 0){
          for(int i = digitos-1; i >= 0; i--){
            if(i == digitos-1){
              cout<<1;
            }
            else{
              if(l[i] != 0){
                if(pode){
                  cout<<l[i]-1;
                  pode = false;
                }
                else cout<<l[i];
                
              }
              else{
                cout<<l[i];
              }
            }
          }
        }
        else{
          for(int i = digitos-1; i >= 0; i--)cout<<l[i];
        }
        cout<<" ";
        for(int i = 0; i < digitos; i++)cout<<l[i];
        cout<<endl;
      }
    }
  }
  else{
    cout<<-1<<" "<<-1<<endl;
  }

}