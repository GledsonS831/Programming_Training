#include <iostream>
#include <cstdio>
#include <map>

using namespace std;

int main(){
    map<string, double> produtos;
    string p;
    double preco;
    int t, qnt_desejado, qnt_disp, qnt;
    cin>>t;
    for(int i = 0; i < t; i++){
        double total = 0;
        cin>>qnt_disp;
        for(int j = 0; j < qnt_disp; j++){
            cin>>p;
            cin>>preco;
            produtos[p] = preco;

        }
        cin>>qnt_desejado;
        for(int i = 0; i < qnt_desejado; i++){
            cin>>p;
            cin>>qnt;
            total += (produtos[p] * qnt);
        }

        printf("R$ %.2lf\n", total);
    }


}
