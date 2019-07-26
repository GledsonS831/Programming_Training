#include <iostream>
using namespace std;
void fibo(int n){
  long long atual = 1;
  long ant = 0;
  long long lista[50];
  lista[1] = atual;
  int i;
  for(i = 2; i <= n; i++){
    long long s = atual+ant;
    lista[i] = s;
    ant = atual;
    atual = s;
  }
  for(int j = i-1; j >= 1; j--){
    if(j == 1) cout<<lista[j];
    else cout<<lista[j]<<" ";

  }
  cout<<endl;
}
int main() {
  int n;
  cin>>n;
  fibo(n);
}