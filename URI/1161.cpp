#include <iostream>
#include <algorithm>
using namespace std;
long long fat(long long num){
  if(num == 1 || num == 0) return 1;
  return num * fat(num-1);
}
int main() {
    long long r = 0, v = 0;
    while(cin>>r>>v){
      long long soma = fat(r) + fat(v);
      cout<<soma<<endl;
    }
   
}