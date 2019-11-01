#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    if(n == 1)cout << 1 << endl;
    else if(n == 2){
        cout << 5 << endl;
    }
    else{
        int count = 1;
        int ans = 5;
        for(int i = 3; i <= n; i++){
            count += 2;
            ans += (count * 2)  + 2;   
        }
        cout << ans << endl;
    }
    
}