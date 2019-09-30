#include <bits/stdc++.h>
 
using namespace std;
 
int subArraySum(int arr[], int n, int sum) { 
 
    int atual = arr[0], start = 0, i; 
 
    int maior = 0;
    int dif = 0;
    for (i = 1; i <= n; i++) { 
        // If curr_sum exceeds the sum, 
        // then remove the starting elements 
        while (atual > sum && start < i - 1) { 
            atual = atual - arr[start]; 
            start++; 
        } 
        if (atual <= sum) {
            
            dif = i - start;
            
            if(dif > maior)maior = dif;
        } 
  
     
        if (i < n) 
        atual = atual + arr[i]; 
    } 
    return maior;
    
} 
int main(){
    int books, time; cin>>books>>time;
    int l[books];
    for(int i = 0; i < books; i++){
        cin>>l[i];
    }
    cout<<subArraySum(l, books, time)<<endl; 
    
}