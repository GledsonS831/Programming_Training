#include <bits/stdc++.h>

using namespace std;

bool is_square_perfect(long long i){
    double aux = i;
    if(sqrt(aux) - (long long)sqrt(i) == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    
    long long n;
    cin>>n;
    
    for(long long i = 2; i <= (long long)sqrt(n); i++){
        while(n % (i*i) == 0){
            n /= i;
        }
    }
    cout<<n<<endl;
}