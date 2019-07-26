#include <iostream>
#include <math.h>
using namespace std;

int lado1(double w, double h, double x1, double y1, double cx, double cy, double raio){
  if((cx >= x1 && cx <= x1+w) && (cy >= y1 && cy <= y1+h)) return 1;
  double soma;
  double d;
  for(int i = x1; i <= w+x1;i++){
    soma = pow((i-cx), 2) + pow((y1-cy), 2);
    d = sqrt(soma);
    if(d <= raio) return 1;
  }
  return 0;
}
int lado2(double w, double h, double x1, double y1, double cx, double cy, double raio){
  if((cx >= x1 && cx <= x1+w) && (cy >= y1 && cy <= y1+h)) return 1;
  double soma;
  double d;
  for(int i = x1; i <= w+x1;i++){
    soma = pow((i-cx), 2) + pow(((y1+h)-cy), 2);
    d = sqrt(soma);
    if(d <= raio) return 1;
  }
  return 0;
}
int lado3(double w, double h, double x1, double y1, double cx, double cy, double raio){
  if((cx >= x1 && cx <= x1+w) && (cy >= y1 && cy <= y1+h)) return 1;
  double soma;
  double d;
  for(int i = y1; i <= y1+h; i++){
    soma = pow((x1-cx), 2) + pow((i-cy), 2);
    d = sqrt(soma);
    if(d <= raio) return 1;
  }
  return 0;
}
int lado4(double w, double h, double x1, double y1, double cx, double cy, double raio){
  if((cx >= x1 && cx <= x1+w) && (cy >= y1 && cy <= y1+h)) return 1;
  double soma;
  double d;
  for(int i = y1; i <= y1+h; i++){
    soma = pow(((x1+w)-cx), 2) + pow((i-cy), 2);
    d = sqrt(soma);
    if(d <= raio) return 1;
  }
  return 0;
}
int calcula_distancia(double w, double h, double x1, double y1, double cx, double cy, double raio){
  if((cx >= x1 && cx <= x1+w) && (cy >= y1 && cy <= y1+h)) return 1;
  if(lado1(w, h, x1, y1, cx, cy, raio)) return 1;
  if(lado2(w, h, x1, y1, cx, cy, raio)) return 1;
  if(lado3(w, h, x1, y1, cx, cy, raio)) return 1;
  if(lado4(w, h, x1, y1, cx, cy, raio) ) return 1; 
  return 0;
}


int main() {
  int n;
  cin>>n;
  int fogo[4] = {0, 20, 30, 50};
  int agua[4] = {0, 10, 25, 40};
  int terra[4] = {0, 25, 55, 70};
  int ar[4] = {0, 18, 38, 60};

  for(int i = 0; i < n; i++){
    double w, h, x1, y1;
    string magia;
    int nivel;
    double cx, cy;
    cin>>w>>h>>x1>>y1;
    
    cin>>magia>>nivel>>cx>>cy;
   
    double raio;
    int hit = 0;
    int resp = 0;
    if (magia[0]=='f') {
      resp = 200;
      raio = fogo[nivel];
    }
    else if (magia[0] == 'w') {
      resp = 300;
      raio = agua[nivel];
    }
    else if (magia[0] == 'e') {
      resp = 400;
      raio = terra[nivel];
    }
    else if (magia[0] == 'a') {
      resp = 100;
      raio = ar[nivel];
    }
    hit = calcula_distancia(w, h, x1, y1, cx, cy,raio); 
    
    if(hit){
      cout<<resp<<endl;
    }
    else{
      resp = 0;
      cout<<resp<<endl;
    }
  }
  return 0;

}