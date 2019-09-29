#include <bits/stdc++.h>

using namespace std;

int main(){
    int l[4];
    for(int i = 0; i < 4; i++)cin>>l[i];
    sort(l, l+4);
    cout<<l[3] - l[0]<<" ";
    cout<<l[3] - l[1]<<" ";
    cout<<l[3] - l[2]<<endl;
}