#include <bits/stdc++.h>

using namespace std;

long double num1(unsigned long long base, unsigned long long lg){
    return log10(lg) / log10(base);
}

unsigned long long conv(long double n){
    if(n - (unsigned long long)n == 0)return (unsigned long long )n;
    else return ((unsigned long long)n+1);

}

int main(){
    unsigned long long l, r, k; cin >> l >> r >> k;
    long double  first = num1(k, l);
    unsigned long long first_power = conv(first);

    if(pow(k, first_power) > r){
        cout << -1 << endl;
    }
    else{
        unsigned long long count = 1; 
        while(1){
            
            if(count >= l){
                if(count * k > r) cout << count <<endl;
                else cout << count << " ";
            }
            count *= k;
            if(count > r){
                break;
            }
            
        }
    }
    
}