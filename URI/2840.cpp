#include <iostream>
using namespace std;

int main() {
  double r, l;
  cin>>r>>l;
  double pi = 3.1415;
  double volume = (4*pi*(r*r*r))/3;
  long long qnt = l/volume;
  cout<<qnt<<endl;
}