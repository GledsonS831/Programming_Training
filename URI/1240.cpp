#include <iostream>
using namespace std;
bool encaixa(int n1, int n2){
  int base = 10;
  while(n2 != 0){
    if(n1%10 != n2 % 10){
      return false;
    }
    else{
      n1 = n1/10;
      n2 = n2 /10;
    }
  }
  return true;
}
int main() {
  int casos, n1, n2;
  cin>>casos;
  for(int i = 0; i < casos; i++){
    cin>>n1>>n2;
    if(encaixa(n1, n2)){
      cout<<"encaixa"<<endl;
    }
    else{
      cout<<"nao encaixa"<<endl;
    }
  }  
}
