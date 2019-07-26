#include <iostream>

using namespace std;
int main() {
  long long n, m;
  while(cin>>n && cin>>m){
    if(n > m) cout<<n-m<<endl;
    else cout<<m-n<<endl;
  }
}