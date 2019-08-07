#include <iostream>
#include <cstdio>
using namespace std;

bool tem_costa(char m[][1010], int x, int y){
    if(m[x+1][y] == '.' || m[x-1][y] == '.' || m[x][y+1] == '.' || m[x][y-1] == '.'){

        return true;
    }
    return false;
}

int verifica_m(char m[][1010], int l, int c){
    int q = 0;
    for(int i = 1;i < l+1; i++){
        for(int j = 1; j < c+1; j++){
            if(m[i][j] == '#'){
                if(tem_costa(m, i, j)){
                    q++;

                }
            }
        }
    }
    return q;
}

int main(){
    int l, c;
    char m[1010][1010];
    cin>>l>>c;
    for(int i = 0; i < 1010; i++){
        for(int j = 0; j < 1010; j++){
            m[i][j] = '.';
        }
    }
    for(int i = 1; i < l+1; i++){
        for(int j = 1; j < c+1; j++){
            cin>>m[i][j];
        }
    }
    cout<<verifica_m(m, l, c)<<endl;

}
