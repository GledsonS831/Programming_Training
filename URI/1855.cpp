#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;

bool caminho(string camp[100], int x, int y){

    int operador = 1;
    int l = 0;
    int c = 0;
    bool ok = true;
    while(ok == true){
        if(l < 0 || l == y || c < 0 || c == x){
            return false;
        }
        else{
            if(camp[l][c] == '>'){
                while(1){
                    c++;
                    if(c == x)return false;
                    if(camp[l][c] == '*'){
                            return ok;
                        }
                    if(camp[l][c] == 'x') return false;
                    if(camp[l][c] != '.' && camp[l][c] != '>' && camp[l][c] != '*'){
                            break;
                    }

                    if(camp[l][c] == '.')camp[l][c]='x';
                }
            }
            else if(camp[l][c] == '<'){
                while(1){
                    c--;
                    if(c == -1)return false;
                    if(camp[l][c] == '*'){
                            return ok;
                        }
                    if(camp[l][c] == 'x') return false;
                    if(camp[l][c] != '.' && camp[l][c] != '<' && camp[l][c] != '*'){
                            break;
                    }

                    if(camp[l][c] == '.')camp[l][c]='x';
                }
            }
            else if(camp[l][c] == 'v'){
                while(1){
                    l++;
                    if(l==x)return false;
                    if(camp[l][c] == '*'){
                            return true;
                        }
                    if(camp[l][c] == 'x') return false;
                    if(camp[l][c] != '.' && camp[l][c] != 'v' && camp[l][c] != '*'){
                            break;
                    }

                    if(camp[l][c] == '.')camp[l][c]='x';
                }
            }
            else if(camp[l][c] =='^'){
                while(1){
                    l--;
                    if(l==-1)return false;
                    if(camp[l][c] == '*'){
                            return true;
                        }
                    if(camp[l][c] == 'x') return false;
                    if(camp[l][c] != '.' && camp[l][c] != '^' && camp[l][c] != '*'){
                            break;
                    }

                    if(camp[l][c] == '.')camp[l][c]='x';
                }
            }
        }

    }

}

int main() {
    int x, y;
    cin>>x>>y;
    string camp[100];
    bool tem = false;
    int linha, col;
    for(int i = 0; i < y; i++){
        cin>>camp[i];
        for(int j = 0; camp[i][j] != '\0'; j++){
            if(camp[i][j] == '*'){
                tem = true;
            }
        }
    }
    if(caminho(camp, x, y))cout<<"*"<<endl;
    else cout<<"!"<<endl;

}
