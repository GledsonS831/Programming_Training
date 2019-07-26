#include <iostream>
#include <map>
using namespace std;

int main() {
  double o, menor = 0, menor_c;
  map<int, string> m;
  m[0] = "Otavio";
  m[1] = "Bruno";
  m[2] = "Ian";
  cin>>o;
  menor = o;
  menor_c = 0;
  int emp = 0;
  for(int i = 1; i < 3; i++){
    cin>>o;
    if(o < menor){
      menor = o;
      menor_c = i;
    }
    else if(o == menor){
      emp = 1;
    }
  }
  if(emp) cout<<"Empate"<<endl;
  else cout<<m[menor_c]<<endl;
}