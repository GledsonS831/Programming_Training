#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
    string cardTable; cin>>cardTable;
    string cardHand;
    bool has = false;
    for(int i = 0; i < 5; i++){
        cin>>cardHand;
        if(cardHand[0] == cardTable[0] || cardHand[1] == cardTable[1]) has = true;
    }
    if(has)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}