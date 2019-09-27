#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int v;
    while(1){
        cin>>n;
        int arr[100000];
        if(!n)break;
        for(int i = 0; i < n; i++){
            cin>>v;
            arr[i] = v;
        }
        int sum = 0;
        int biggest = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
            if(sum < 0){
                sum = 0;
            }
            else if(sum > biggest) biggest = sum;
        }
        if(biggest == 0)cout<<"Losing streak."<<endl;
        else{
            cout<<"The maximum winning streak is "<<biggest<<"."<<endl;
        }
    }
}