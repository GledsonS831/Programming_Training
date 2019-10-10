#include <bits/stdc++.h>
using namespace std;

int main() {
    int l[100];
    for(int i = 0; i < 4; i++){
        cin >> l[i];
    }
        
    cout<<abs((l[1] - l[0]) - (l[3] - l[2]))<<endl;  
}
