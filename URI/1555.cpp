#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int main() {
    int n;
    int x, y;
    char ganhador[100];
    int maior = 0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>x>>y;
        maior = 0;
        int f_rafael = 0;
        int f_beto = 0;
        int f_carlos = 0;
        f_rafael = 9 * x * x + (y*y);
        if(f_rafael > maior){
            maior = f_rafael;
            ganhador[0] = 'r';
        }
        f_beto = 2*x*x + (25*y*y);
        if(f_beto > maior){
            maior = f_beto;
            ganhador[0] = 'b';
        }
        f_carlos = -100*x + (y*y*y);
        if(f_carlos > maior){
            maior = f_carlos;
            ganhador[0] = 'c';
        }
        if(ganhador[0] == 'r'){
            cout<<"Rafael ganhou"<<endl;
        }
        else if(ganhador[0] == 'c') cout<<"Carlos ganhou"<<endl;
        else cout<<"Beto ganhou"<<endl;
    }

}
