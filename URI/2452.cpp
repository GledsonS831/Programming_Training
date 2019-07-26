#include <iostream>
using namespace std;

int main() {
  int comprimento, num_posicoes;
  cin>>comprimento>>num_posicoes;
  int ant  = 0;
  int maior  = 0;
  int dif = 0;
  cin>>ant;
  maior = ant-1;
  for(int i = 0; i < num_posicoes-1; i++){
    int n;
    cin>>n;
    dif = n - ant - 1;
    if(dif % 2 == 0){
      dif = dif/2;
    }
    else{
      dif = dif/2+1;
    }
    ant = n;
    if(dif > maior) maior = dif;
  }
  if(comprimento-ant > maior) maior = comprimento-ant;
  cout<<maior<<endl;

}