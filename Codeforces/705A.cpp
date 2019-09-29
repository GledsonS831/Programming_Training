#include <bits/stdc++.h>

using namespace std;

string s1(){
    return " I hate it";
}
string s2(){
    return " That I love";
}

int main(){
    int n;
    string frase("I hate it");
    cin>>n;
    for(int i = 2; i <= n; i++){
        if(i % 2 == 0) frase += s2;
        else frase += s1;
    }
    cout<<frase<<endl;
}