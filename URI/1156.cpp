#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int main() {
  double s = 0;
  double impar = 0;
  double expo = 0;
  for(int i = 1; i <= 39; i++){
    if(i % 2 != 0){
        impar = i;
        s += (impar/(pow(2, expo)));
        expo++;
    }
  }
  printf("%.2lf\n", s);

}
