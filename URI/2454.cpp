#include <iostream>
using namespace std;

int main() {
  int p, q;
  cin>>p>>q;
  if(p == 0){
    cout<<"C"<<endl;
  }
  else if(p == 1 && q == 0){
    cout<<"B"<<endl;
  }
  else if(p == 1 && q == 1){
    cout<<"A"<<endl;
  }
}