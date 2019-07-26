#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int main() {
  long double a, b, c;
  while(cin>>a && cin>>b && cin>>c){
    
    long double pi =  3.141592653589793238462643383279502884197169399375105820974944592307816406286;
    long double p = (a + b + c)/2;
    long double area_triangulo = sqrt(p*((p-a)*(p-b)*(p-c)));
    long double R = (a * b * c)/(4*area_triangulo);
    long double r = area_triangulo/p;
    long double area_circulo_pequeno = pi*pow(r, 2);
    long double area_circulo_grande = pi*pow(R, 2);
    printf("%.4Lf %.4Lf %.4Lf\n", area_circulo_grande-area_triangulo,area_triangulo-area_circulo_pequeno, area_circulo_pequeno);
  }
}