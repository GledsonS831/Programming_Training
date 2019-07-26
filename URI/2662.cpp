#include <iostream>
#include <map>
using namespace  std;

int eh_do(int n){
    bool escala[12] = {true, false, true, false, true, true, false, true, false, true, false, true};
    if(escala[n] == false) return -1;
    else return 1;
}
int eh_doS(int n){
    bool escala[12] = {true, true, false, true, false, true, true, false, true, false, true, false};
    if(escala[n] == false) return -1;
    else return 1;
}
int eh_re(int n){
    bool escala[12] = {false, true, true, false, true, false, true, true, false, true, false, true};
    if(escala[n] == false) return -1;
    else return 1;
}
int eh_reS(int n){
    bool escala[12] = {true, false, true, true, false, true, false, true, true, false, true, false};
    if(escala[n] == false) return -1;
    else return 1;
}
int eh_mi(int n){
    bool escala[12] = {false, true, false, true, true, false, true, false, true, true, false, true};
    if(escala[n] == false) return -1;
    else return 1;
}
int eh_fa(int n){
    bool escala[12] = {true, false, true, false, true, true, false, true, false, true, true, false};
    if(escala[n] == false) return -1;
    else return 1;
}
int eh_faS(int n){
    bool escala[12] = {false, true, false, true, false, true, true, false, true, false, true, true};
    if(escala[n] == false){
        return -1;
    }
    else return 1;
}
int eh_sol(int n){
    bool escala[12] = {true, false, true, false, true, false, true, true, false, true, false, true};
    if(escala[n] == false) return -1;
    else return 1;
}
int eh_solS(int n){
    bool escala[12] = {true, true, false, true, false, true, false, true, true, false, true, false};
    if(escala[n] == false) return -1;
    else return 1;
}
int eh_la(int n){
    bool escala[12] = {false, true, true, false, true, false, true, false, true, true, false, true};
    if(escala[n] == false) return -1;
    else return 1;
}
int eh_laS(int n){
    bool escala[12] = {true, false, true, true, false, true, false, true, false, true, true, false};
    if(escala[n] == false) return -1;
    else return 1;
}
int eh_si(int n){
    bool escala[12] = {false, true, false, true, true, false, true, false, true, false, true, true};
    if(escala[n] == false) return -1;
    else return 1;
}
int main(){
    int n;
    map<int, string> resposta;
    resposta[0] = "do";
    resposta[1] = "do#";
    resposta[2] = "re";
    resposta[3] = "re#";
    resposta[4] = "mi";
    resposta[5] = "fa";
    resposta[6] = "fa#";
    resposta[7] = "sol";
    resposta[8] = "sol#";
    resposta[9] = "la";
    resposta[10] = "la#";
    resposta[11] = "si";
    int escala[12];
    for(int i = 0; i < 12; i++){
        escala[i] = 1;
    }
    cin>>n;
    int nota;

    for(int i = 0; i < n; i++){
        cin>>nota;
        int num = (nota-1)%12;
        if(eh_do(num) == -1) escala[0] = -1;
        if(eh_doS(num)== -1) escala[1] = -1;
        if(eh_re(num)== -1) escala[2] = -1;
        if(eh_reS(num)== -1) escala[3] = -1;
        if(eh_mi(num)== -1) escala[4] = -1;
        if(eh_fa(num)== -1) escala[5] = -1;
        if(eh_faS(num)== -1) escala[6] = -1;
        if(eh_sol(num)== -1) escala[7] = -1;
        if(eh_solS(num)== -1) escala[8] = -1;
        if(eh_la(num)== -1) escala[9] = -1;
        if(eh_laS(num)== -1) escala[10] = -1;
        if(eh_si(num)== -1) escala[11] = -1;
    }


    int ok = 0;
    for(int i = 0; i < 12; i++){
        if(escala[i] != -1) {
            cout<<resposta[i]<<endl;
            ok = 1;
            break;
        }
    }
    if(ok == 0)cout<<"desafinado"<<endl;

}
