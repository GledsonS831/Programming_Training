#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
long double calcula_area(long double n){
  long double apotema;
  apotema = ((n)/(tan((36 * M_PI)/180)*2) * (n/2))/2;
 
  return apotema*10;
}
int main() {
  int casos;
  cin>>casos;
  long double n;
  for(int i = 0; i < casos; i++){
    cin>>n;
    printf("%.3Lf\n", calcula_area(n));
   
  }
}
