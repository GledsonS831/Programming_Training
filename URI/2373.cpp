#include <iostream>
using namespace std;

int main() {
  int n, l, c;
  cin>>n;
  int soma = 0;
  for(int i = 0; i < n; i++){
    cin>>l>>c;
    if(l > c) soma += c;
  }
  cout<<soma<<endl;
}