#include <iostream>
using namespace std;

long long permutacao(long long n, long long m){
  long long i = 0, resp=1;
  while(i < m){
    
    resp *= n-i;
    while(resp % 10 == 0){
      resp = resp / 10;
    }
    resp = resp % 10000000000;
    i++;
  }
  return resp;
}
long long ultimo(long long n){
  long long u = n % 10;
  while(u == 0){
    u = n % 10;
    n = n / 10;
  }
  return u;
}

int main() {
  long long n, m, resp;
  while(cin>>n>>m){
    resp = permutacao(n,  m);
    cout<<ultimo(resp)<<endl;
  }
}