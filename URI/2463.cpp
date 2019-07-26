#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int salas[n];
  for(int i = 0; i < n;i++){
    int v;
    cin>>v;
    salas[i] = v;
  }
  int soma = 0;
  int maior_soma = 0;
  for(int i = 0; i < n; i++){
    soma += salas[i];
    if(soma > maior_soma) maior_soma = soma;
    if(soma < 0) soma = 0;
  }
  cout<<maior_soma<<endl;
}