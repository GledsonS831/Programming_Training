#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int bills = 0;
    int l[5] = {100, 20, 10, 5, 1};
    int i = 0;
    while(i < 5){
        if(n % l[i] == 0){
            bills++;
        }
        else{
            n /= l[i++];
        }
    }
    cout<<bills<<endl;
}