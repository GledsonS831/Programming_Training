#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
   int n;
   cin>>n;
   for(int i = 0; i < n; i++){
      long long v;
      cin>>v;
      v = (pow(2, v)/12)/1000;
      cout<<v<<" "<<"kg"<<endl;
   }
   
}