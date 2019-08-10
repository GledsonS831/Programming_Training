#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

void modifica_campo(char m[][103], int m_int[103][103]){
    for(int i = 0; i < 103; i++){
        for(int j = 0; j < 103; j++){
            if(m[i][j] == '*'){
                m_int[i][j] = -99;
            }
            else{
                m_int[i][j] = 0;
            }
        }
    }
}
void adiciona(int m[][103], int i, int j){
    m[i-1][j-1]++;
    m[i-1][j]++;
    m[i-1][j+1]++;
    m[i][j+1]++;
    m[i+1][j+1]++;
    m[i+1][j]++;
    m[i+1][j-1]++;
    m[i][j-1]++;

}
void novo_campo(int m[103][103], char mc[103][103], int l, int c){
  for(int i = 1; i < l+1; i++){
        for(int j = 1; j < c+1; j++){
            if(mc[i][j] == '*'){
                adiciona(m, i, j);
            }

        }
    }

}

int main(){
    int l, c, caso = 1;
    while(cin>>l>>c, l>0 && c>0){
        if(caso > 1)cout<<endl;
        int m[103][103];
        char m_char[103][103];
        for(int i = 0; i < 103; i++){
          for(int j = 0; j < 103; j++)m[i][j]=0;
        }
        for(int i = 1; i < l+1; i++){
            for(int j = 1; j < c+1; j++){
                cin>>m_char[i][j];
            }
        }
        modifica_campo(m_char, m);
        novo_campo(m, m_char, l, c);
        cout<<"Field #"<<caso++<<":"<<endl;
        for(int i = 1; i<l+1; i++){
            for(int j = 1; j < c+1; j++){
                if(m[i][j] < 0){
                  cout<<"*";
                }
                else{
                  cout<<m[i][j];
                }
            }
            cout<<endl;
        }

    }
}
