#include <iostream>
using namespace std;
int main() {
  int n; cin>>n;

  int la, lb, sa, sb; cin>>la>>lb>>sa>>sb;

  if(n >= la && n <= lb && n >= sa && n <= sb)cout<<"possivel"<<endl;
  else cout<<"impossivel"<<endl;
}
