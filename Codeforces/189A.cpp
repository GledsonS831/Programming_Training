#include <bits/stdc++.h>

using namespace std;

int maximumSegments(int n, int a, int b, int c) { 
    int dp[n + 1]; 
      
  
    memset(dp, -1, sizeof(dp)); 

    dp[0] = 0;  
  
    for (int i = 0; i < n; i++)  { 
        if (dp[i] != -1) { 
              
            
            if(i + a <= n )  dp[i + a] = max(dp[i] + 1, dp[i + a]); 
                                
            if(i + b <= n ) dp[i + b] = max(dp[i] + 1,  dp[i + b]); 
                                
            if(i + c <= n ) dp[i + c] = max(dp[i] + 1, dp[i + c]); 
        } 
    } 
    for(int i : dp){
        cout << i << endl;
    }
    return dp[n]; 
} 

int main() 
{ 
    int n, a, b, c; cin >> n >> a >> b >> c;
    cout << maximumSegments(n, a, b, c) << endl;  
    return 0; 
} 