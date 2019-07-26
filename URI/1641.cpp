#include <iostream>
#include <math.h>
using namespace std;

int nao_passou(double raio, double w, double l){
  double soma_lados = pow((w/2), 2) + pow((l/2), 2);
  double raio_quad = pow(raio, 2);
  
  if(soma_lados <= raio_quad){
    return 1;
  }
  else{
    return 0;
  }
}

int main() {
  double r = 1, w = 1, l = 1;
  int c = 0;
  while(1){
    cin>>r;
    if(r==0) break;
    cin>>w>>l;
    c++;
    int esta = nao_passou(r, w, l);
    if(esta){
      cout<<"Pizza "<<c<<" fits on the table."<<endl;
    }
    else{
      cout<<"Pizza "<<c<<" does not fit on the table."<<endl;
    }
  }
}