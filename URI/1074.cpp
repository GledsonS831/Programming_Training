#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x;
    for(int i = 0; i < n; i++){
        cin>>x;
        if(x == 0) cout<<"NULL"<<endl;
        else if(x % 2 != 0){
            if(x < 0) cout<<"ODD NEGATIVE"<<endl;
            else cout<<"ODD POSITIVE"<<endl;
        }
        else{
            if(x < 0) cout<<"EVEN NEGATIVE"<<endl;
            else cout<<"EVEN POSITIVE"<<endl;
        }
    }

}
