#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int a, b, c;
    int x, y, z;
    cin>>a>>b>>c;
    cin>>x>>y>>z;
    int largura = x / a;
    int compri = y/b;
    int alt = z / c;
    if(largura == 0|| compri == 0 || alt == 0){
        cout<<0<<endl;
    }
    else{
        cout<<largura*compri*alt<<endl;
    }


}
