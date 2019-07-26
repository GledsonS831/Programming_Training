#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int primo(long long num){
  for(int i = 2; i <= sqrt(num); i++){
    if(num % i == 0){
      return 0;
    }
  }
  return 1;
}

int main() {
   int n;
   cin>>n;
   for(int i = 0; i < n; i++){
      long long v;
      cin>>v;
      if(primo(v)){
        cout<<"Prime"<<endl;
      }
      else{
        cout<<"Not Prime"<<endl;
      }
   }
   
}