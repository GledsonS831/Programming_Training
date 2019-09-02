#include <iostream>
#include <math.h>
using namespace std;
bool primo(int n){
  if(n == 2)return true;
  int raiz = sqrt(n);
  for(int i = 2; i <= raiz; i++){
    if(n % i == 0)return false;
  }
  return true;
}
int encontra(int n){
  while(true){
    if(primo(n)){
      return n;
    }
    else{
      n-=1;
    }
  }
}
int main() {
  int n;
  cin>>n;
  if(primo(n)){
    cout<<n<<endl;
  }
  else{
    cout<<encontra(n-1)<<endl;
  }
}
