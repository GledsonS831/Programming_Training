#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int bills = 0;
    int l[5] = {100, 20, 10, 5, 1};
    int i = 0;
    while(i < 5){
        if(n / l[i] > 0){
            n -= l[i];
            bills++;
        }
        else{
            i++;
        }
    }
    cout<<bills<<endl;
}