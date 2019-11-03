#include <bits/stdc++.h>

using namespace std;

int increasing_max(int arr[], int size){
    int greater = 1;
    int curr = arr[0];
    int count = 1;
    
    for(int i = 0; i < size-1; i++){
        
        if(arr[i] < arr[i+1]){
            count++; 
        }
        else{
            if(count > greater) greater = count;
            count = 1;
        }
        
    }
    if(count > greater) greater = count;
    return greater;
}

int main(){
    int size; cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    cout << increasing_max(arr, size) << endl;


    return 0;
}