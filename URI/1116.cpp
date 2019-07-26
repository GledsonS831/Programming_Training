#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int main() {
    int n;
    cin>>n;
    double x, y;
    for(int i = 0; i < n; i++){
        cin>>x>>y;
        if(y == 0){
            cout<<"divisao impossivel"<<endl;
        }
        else{
            printf("%.1lf\n", x/y);
        }
    }

}
