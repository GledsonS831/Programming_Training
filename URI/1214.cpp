#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int c;
  cin>>c;
  int lista[1000];
  
  for(int i = 0; i < c; i++){
    int qnt = 0;
    int soma = 0;
    int qnt_acima = 0;
    double n;
    cin>>n;
    for(int j = 0; j < n; j++){
      int num;
      cin>>num;
      lista[j] = num;
      qnt++;
      soma+=num;
    }
    double media = soma/qnt;
    for(int j = 0; j < n; j++){
      if(lista[j] > media){
        qnt_acima++;
      }
    }
    
    double media_f = qnt_acima/n;
    printf("%.3lf", media_f*100);
    cout<<"%"<<endl;
  }  
  return 0;
}