#include <iostream>
using namespace std;
int main() {
  int c = 0;
  for(int i = 0; i < 5; i++){
    int n;
    cin>>n;
    if(n<0){
      n*=-1;
    }
    if(n%2 == 0){
      c++;
    }
  }
  cout<<c<<" valores pares"<<endl;
}