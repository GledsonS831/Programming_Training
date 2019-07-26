#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int main() {
    int n;
    int m[70][70];
    while(cin>>n){
        for(int i = 0; i < n; i++){
            for(int j = 0;j < n; j++){
                if((i + j) == n-1) m[i][j] = 2;
                else if(i == j){
                    m[i][j] = 1;
                }
                else m[i][j] = 3;
                }
            }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n;j++){
                cout<<m[i][j];
            }
            cout<<endl;
        }

        }
}

