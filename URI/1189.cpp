#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;

int main() {
    double v;
    string op;
    cin>>op;
    double soma= 0;
    double qnt = 0;
    double m[12][12];
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin>>v;
            m[i][j] = v;
        }
    }
    int fim = 11;
    int ini = 1;
    for(int i = 0; i < 5; i++){
        for(int j = ini; j < fim; j++){
            soma += m[j][i];
            qnt++;
        }
        fim--;
        ini++;
    }
    
    if(op == "S") printf("%.1lf\n", soma);
    else if(op=="M")printf("%.1lf\n", soma/qnt);
}
