#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x, y;
    int s = 0;
    int x_aux;
    for(int i = 0; i < n; i++){
        cin>>x>>y;
        s = 0;
        if(x > y){
            x_aux = y;
            y = x;
            x = x_aux;
        }
        for(int j = x+1; j < y; j++){
            if(j % 2 != 0){
                s += j;
            }
        }
        cout<<s<<endl;
    }

}
