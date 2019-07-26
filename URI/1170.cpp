#include <iostream>
#include <algorithm>
using namespace std;

int main() {
   double p;
   int divisoes = 0;
   int n;
   cin>>n;
   for(int i = 0; i < n; i++){
     divisoes = 0;
     cin>>p;
     while(p > 1){
        p = p / 2;
        divisoes++;
      }
      cout<<divisoes<<" "<<"dias"<<endl;
   }
   
}