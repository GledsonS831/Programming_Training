#include <bits/stdc++.h>

using namespace std;

int main(){
    int resp;
    int n, v;
    cin>>n;
    bool dificil = false;
    for(int i = 0; i < n; i++){
        cin>>v;
        if(v)dificil = true;
    }
    if(dificil)cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
}