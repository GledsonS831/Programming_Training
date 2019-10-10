#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int m,n,p, q, v;
    int soma;
    while(1){
        cin>>m>>n>>p;
        if(m == 0 && n == 0 && p == 0)break;
        soma = 0;
        for(int i = 0; i < p; i++){

            cin>>v;
            if(v > n) v = v % n;
            if(v == 0) v = n;
            //cout<<"v ->"<<v<<endl;
            soma += n - v + 1; 
        }
        cout<<"Lights: "<<soma<<endl;
    }

}