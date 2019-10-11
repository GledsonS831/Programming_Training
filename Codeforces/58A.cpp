#include <bits/stdc++.h>

using namespace std;

bool has_hello(string s){
    string ok("hello");
    int count = 0, count_aux = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ok[count_aux]){count++; count_aux++;}
        if(count == 5)return true;
    }
    
    return false;
}

int main(){
    string s;
    
    cin>>s;
    if(has_hello(s))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
}