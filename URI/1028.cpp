#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n;
  cin>>n;
  for(int i = 0; i < n; i++){
    int r, v;
    cin>>r>>v;
    cout<<__gcd(r, v)<<endl;
  }
}