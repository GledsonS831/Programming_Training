#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;

int qnt_dig(int n){
    int c = 0;
    while(1){
        n = n / 10;
        c++;
        if(n == 0) break;
    }
    return c;
}

int main() {
    int n;
    int m[16][16] = {};
    int t;
    int c = 0;
    int maxi;
    string esp = " ";
    while(1){
        cin>>t;

        if(t == 0) break;
        m[0][0] = 1;
        for(int i = 1; i < t; i++){
            m[0][i] = 2 * m[0][i-1];
        }

        for(int i = 0; i < t; i++){
            for(int j = 1; j < t; j++){
                m[j][i] = 2 * m[j-1][i];
            }
        }
        maxi = qnt_dig(m[t-1][t-1]);
        for(int i = 0; i < t; i++){
            for(int j = 0; j < t; j++){
                int qnt = qnt_dig(m[i][j]);
                if(j != 0)cout<<" ";
                if(j == t-1){
                    for(int k = 0; k < maxi-qnt; k++){
                        cout<<" ";
                    }
                    cout<<m[i][j];
                }
                else{
                    for(int k = 0; k < maxi-qnt; k++){
                        cout<<" ";
                    }
                    cout<<m[i][j];
                }
            }
            cout<<endl;
        }
        cout<<endl;

    }

}
