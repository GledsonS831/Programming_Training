#include <iostream>
#include <math.h>
#include <algorithm>
#include <cstdio>

using namespace std;
int main() {
  int a, b;

  scanf("%d.%d", &a, &b);
  int r = (a* 100) + b;
  int ang = 360*100;
  cout<<ang/__gcd(ang, r)<<endl;
}