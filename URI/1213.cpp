#include <iostream>
#include <algorithm>
#include <math.h>
#include <cstdio>
using namespace std;

int main() {
   long long int n;
   long long int v;
   long long int count;
   while(scanf("%lli", &n) == 1){
     count = 1;
     v = 1;
     while(v % n != 0){
       v = (v*10 + 1) % n;
       count++;
     }
    printf("%lli\n", count);
    
   }
   
}