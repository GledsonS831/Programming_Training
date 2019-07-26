#include <iostream>
using namespace std;

int main() {
  int p1, c1, p2, c2;
  cin>>p1>>c1>>p2>>c2;
  int lado1 = p1*c1;
  int lado2 = p2*c2;
  if(lado1==lado2) cout<<0<<endl;
  else if(lado1 < lado2) cout<<1<<endl;
  else cout<<-1<<endl;
}