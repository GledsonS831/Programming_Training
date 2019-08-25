#include <iostream>
#include <math.h>
using namespace std;

int main() {
  double distancia, vf, vg;
  while(cin>>distancia && cin>>vf && cin>>vg){
    double hipotenusa = sqrt(144+(distancia*distancia));
    double t_ladrao = 12/vf, t_guarda = hipotenusa/vg;
    if(t_ladrao < t_guarda)cout<<"N"<<endl;
    else cout<<"S"<<endl;
  }
}
