#include <iostream>
using namespace std;

int main() {
  int h1=1, m1=1, h2=1, m2=1;
  while(cin >> h1 >> m1 >> h2 >> m2){
    if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0){
      break;
    }
    int total = 0;
    int horas = 0;
    int horas2 = 0;

    if(h1 == 0){
      horas = 24*60 + m1;
    }
    else{
      horas = h1*60 + m1;
    }
    if(h2 == 0){
      horas2 = 24*60 + m2;
    }
    else{
      horas2 = h2*60 + m2;
    }
    if(horas2 > horas){
      cout<<horas2 - horas<<endl;
    }
    else{
      cout<<24*60-(horas-horas2)<<endl;
    }
  }
}