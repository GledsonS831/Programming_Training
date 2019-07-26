#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;



int main() {
    int n, m;
    while(cin>>n>>m){
        int aux = 10;
        int aux2 = 1;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += (m%aux)/aux2;
            aux*=10;
            aux2*=10;
        }
        if(sum%3 == 0)cout<<sum<<" sim"<<endl;
        else cout<<sum<<" nao"<<endl;
    }
}
