#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;

int main() {
    int ini = 1, ii = 0, fim = 4, pare = 0;
    while(1){
        for(int j = 0; j < 10; j = j+2){
            for(int k = ini; k < fim; k++){
                if(ii==2 && j > 0){
                    pare = 1;
                    break;
                }
                if(j==0){
                    cout<<"I="<<ii<<" J="<<k<<endl;
                }
                else{
                    cout<<"I="<<ii<<"."<<j<<" J="<<k<<"."<<j<<endl;
                }
            }
            if(pare)break;
        }
        if(pare)break;
        ini++;
        fim++;
        ii++;

    }
}
