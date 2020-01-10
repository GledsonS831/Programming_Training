#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int lista[n+1];
    int aux[n+1];
    int deu, recebeu;

    for(int i = 1; i <= n; i++){
        cin >> lista[i];
    }
    for(int i = 1; i <= n; i++){
        aux[lista[i]] = i;
    }
    for(int i = 1; i <= n; i++){
        if(i != n)cout << aux[i] << " ";
        else{
            cout << aux[i] << endl;
        }
    }

}



