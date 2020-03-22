#include "bits/stdc++.h"

using namespace std;

int cont_atual = 0;
int cont_temp = 0;

string verifica(string s, int cont_temp, int cont_atual){
    string resp;
    for(int i = 0; i < s.size(); i++){
        
        if(cont_temp == cont_atual){
            
            resp.push_back(s[i]);
            cont_temp = 0;
            cont_atual++;
        }
        cont_temp++;
    }
    return resp;
}

int main(){
    int n;
    cin >> n;

    string cadeia;
    cin >> cadeia;

    string resp = verifica(cadeia, cont_temp, cont_atual);
    for(int i = 0; i < resp.size(); i++){
        cout << resp[i];
    }
    cout << endl;
}