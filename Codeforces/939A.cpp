#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, v; cin>>n;
    int lista[n+1];
    for(int i = 1; i <= n; i++){
        cin>>lista[i];
    }
    int ok = 0;
    int val = 0;
    for(int i = 1; i <= n; i++){
        int vr[5001] = {};
        val = lista[i];
        vr[i] = 1;

        if(vr[val] == 0){
            vr[val] = 1;
            val = lista[val];
            if(vr[val] == 0){
                vr[val] = 1;
                val = lista[val];
                if(val == i){
                    ok = 1;
                    break;
                }
            }
        }
    }
    if(ok)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}