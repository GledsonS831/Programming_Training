#include <bits/stdc++.h>

using namespace std;

int main(){
    map<string, int> mp;

    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;

    string s;
    int n;
    int sum = 0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>s;
        sum += mp[s];
    }
    cout<<sum<<endl;
}