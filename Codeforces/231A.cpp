#include <bits/stdc++.h>

using namespace std;

bool willImplements(int a, int b, int c){
    int count = 0;
    if(a)count++;
    if(b)count++;
    if(c)count++;

    if(count > 1)return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    int a, b, c;
    int res = 0;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;

        if(willImplements(a, b, c))res++;
    }
    cout << res << endl;
}