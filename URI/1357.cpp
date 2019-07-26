#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

void part1_n(char n){
    if(n == '1')cout<<"*.";
    else if(n=='2') cout<<"*.";
    else if(n=='3') cout<<"**";
    else if(n=='4')cout<<"**";
    else if(n=='5')cout<<"*.";
    else if(n=='6')cout<<"**";
    else if(n=='7')cout<<"**";
    else if(n=='8')cout<<"*.";
    else if(n=='9')cout<<".*";
    else if(n=='0')cout<<".*";
}

void part2_n(char n){
    if(n== '1')cout<<"..";
    else if(n=='2') cout<<"*.";
    else if(n=='3') cout<<"..";
    else if(n=='4')cout<<".*";
    else if(n=='5')cout<<".*";
    else if(n=='6')cout<<"*.";
    else if(n=='7')cout<<"**";
    else if(n=='8')cout<<"**";
    else if(n=='9')cout<<"*.";
    else if(n=='0')cout<<"**";
}

void part3_n(char n){
    if(n== '1')cout<<"..";
    else if(n=='2') cout<<"..";
    else if(n=='3') cout<<"..";
    else if(n=='4')cout<<"..";
    else if(n=='5')cout<<"..";
    else if(n=='6')cout<<"..";
    else if(n=='7')cout<<"..";
    else if(n=='8')cout<<"..";
    else if(n=='9')cout<<"..";
    else if(n=='0')cout<<"..";
}
int size_c(char *n){
    int t = 0;
    int i = 0;
    while(n[i] != NULL){
        t++;
        i++;
    }
    return t;
}

void preenche_matriz(char **n, char *p, int tam){

    int i = 0, l =0;

    while(i < tam){
        if(p[i] != ' '){
            n[l][0] = p[i];
            i++;
            n[l][1] = p[i];
        }
        else{
            l++;
        }
        i++;
    }

}

char um[4] = {'*', '.', '.', '.'};
    char dois[4] = {'*', '.', '*', '.'};
    char tres[4] = {'*', '*', '.', '.'};
    char quatro[4] = {'*', '*', '.', '*'};
    char cinco[4] = {'*','.','.','*'};
    char seis[4] = {'*','*', '*','.'};
    char sete[4] = {'*', '*', '*','*'};
    char oito[4] = {'*', '.', '*','*'};
    char nove[4] = {'.', '*', '*','.'};
    char zero[4] = {'.', '*', '*','*'};

void descobre_numero(char *n1_p1, char *n1_p2,char *n2_p1, char *n2_p2){
    if(n1_p1[0] == um[0] && n1_p2[0] == um[1] && n2_p1[0] == um[2] && n2_p2[0] == um[3]){
        cout<<1;
    }
    if(n1_p1[0] == dois[0] && n1_p2[0] == dois[1] && n2_p1[0] == dois[2] && n2_p2[0] == dois[3]){
        cout<<2;
    }
    if(n1_p1[0] == tres[0] && n1_p2[0] == tres[1] && n2_p1[0] == tres[2] && n2_p2[0] == tres[3]){
        cout<<3;
    }
    if(n1_p1[0] == quatro[0] && n1_p2[0] == quatro[1] && n2_p1[0] == quatro[2] && n2_p2[0] == quatro[3]){
        cout<<4;
    }
    if(n1_p1[0] == cinco[0] && n1_p2[0] == cinco[1] && n2_p1[0] == cinco[2] && n2_p2[0] == cinco[3]){
        cout<<5;
    }
    if(n1_p1[0] == seis[0] && n1_p2[0] == seis[1] && n2_p1[0] == seis[2] && n2_p2[0] == seis[3]){
        cout<<6;
    }

    if(n1_p1[0] == sete[0] && n1_p2[0] == sete[1] && n2_p1[0] == sete[2] && n2_p2[0] == sete[3]){
        cout<<7;
    }
    if(n1_p1[0] == oito[0] && n1_p2[0] == oito[1] && n2_p1[0] == oito[2] && n2_p2[0] == oito[3]){
        cout<<8;
    }
    if(n1_p1[0] == nove[0] && n1_p2[0] == nove[1] && n2_p1[0] == nove[2] && n2_p2[0] == nove[3]){
        cout<<9;
    }
    if(n1_p1[0] == zero[0] && n1_p2[0] == zero[1] && n2_p1[0] == zero[2] && n2_p2[0] == zero[3]){
        cout<<0;
    }

}

int main() {
    int d = 1;
    string opcao;
    string digitos;

    char p1[1000];
    char p2[1000];
    char p3[1000];



    while(1){
        cin>>d;
        if(d == 0)break;
        cin>>opcao;
        if(opcao[0] == 'S'){
                cin>>digitos;
            for(int i = 0; i < d; i++){
                part1_n(digitos[i]);
                if(i != d-1)cout<<" ";
            }
            cout<<endl;
            for(int i = 0; i < d; i++){
                part2_n(digitos[i]);
                if(i != d-1)cout<<" ";
            }
            cout<<endl;
            for(int i = 0; i < d; i++){
                part3_n(digitos[i]);
                if(i != d-1)cout<<" ";
            }
            cout<<endl;
        }
        else{
          char **matriz_p1 = (char**) malloc(101*sizeof(char*));
          for(int i = 0; i < 101; i++){
            matriz_p1[i] = (char*)malloc(101*sizeof(char));
          }
          char **matriz_p2 = (char**) malloc(101*sizeof(char*));
          for(int i = 0; i < 101; i++){
            matriz_p2[i] = (char*)malloc(101*sizeof(char));
          }


            int tam;
            scanf(" %[^\n]s", p1);
            tam = size_c(p1);
            scanf(" %[^\n]s", p2);
            scanf(" %[^\n]s", p3);
            preenche_matriz(matriz_p1, p1, tam);
            preenche_matriz(matriz_p2, p2, tam);

            for(int i = 0; i < d; i++){
                char l1[100];
                l1[0] = matriz_p1[i][0];
                char l2[100];
                l2[0] = matriz_p1[i][1];
                char m1[100];
                m1[0] = matriz_p2[i][0];
                char m2[100];
                m2[0] = matriz_p2[i][1];
                descobre_numero(l1, l2, m1, m2);
            }
            cout<<endl;

        }

    }
}
