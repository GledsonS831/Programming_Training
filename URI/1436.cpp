#include <iostream>
using namespace std;

int main() {
  int casos, jogadores, idade, resp;
  cin>>casos;
  for(int i = 0; i < casos; i++){
    cin>>jogadores;
    for(int j = 0; j < jogadores; j++){
      cin>>idade;
      if(j == jogadores/2)resp = idade;
    }
    cout<<"Case "<<i+1<<": "<<resp<<endl;
  }
}
