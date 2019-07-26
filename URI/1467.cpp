#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  
  while(cin>>a>>b>>c){
    
  if(a == b && b == c){
    cout<<"*"<<endl;
  }
  else{
    if(a != b && b == c){
      cout<<"A"<<endl;
    }
    else if(a != b && a == c){
      cout<<"B"<<endl;
    }
    else if(b != c && a == b){
      cout<<"C"<<endl;
    }
  }
  }
}