#include <bits/stdc++.h>

using namespace std;

int number_x(int l, int r){
    int digits[10], d;
    bool has;
    while(l <= r){
        int digits[10] = {};
        has = true;
      
        int number = l;

        while(number > 0){
            
            d = number % 10;
            digits[d]++;
            if(digits[d] > 1) has = false;
            number /= 10;
        }
        
        if(has)return l;
        l++;
    }
    return -1;
}

int main(){
    int l, r; cin>>l>>r;

    cout<<number_x(l, r)<<endl;
    
}