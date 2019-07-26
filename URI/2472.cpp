#include <iostream>
using namespace std;

int main() {
  long long l, n;
  cin>>l>>n;
  long long dif = ((l- n)+1);
  long long area =  (dif * dif)+ (n-1);
  cout<<area<<endl;
}