#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
int main(){
    ll l, r, k, ant; 
   
    cin >> l >> r >> k;
    vector < ll > vc;
    ll aux = 1;
 
    bool has = false;
    while(1){
        if( aux >= l){
           vc.push_back(aux);
            has = true;
        }
        if( (r / k) < aux){
            break;
        }
        aux *= k;
    }
    if( not has ) cout << -1 << endl;
    else{
      ll i = 0;
      for(i = 0; i < vc.size()-1; i++){
        cout << vc[i] << " ";
      }
      cout << vc[i] << endl;
    }
}