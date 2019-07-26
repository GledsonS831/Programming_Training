#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

typedef struct{
    char letra[100];
    int qnt_ocorrencia;
}Alfabeto;
void preenche(Alfabeto alf[26]){
    for(int i = 97, j= 0; i <= 122; i++, j++){
        alf[j].letra[0] = i;
        alf[j].qnt_ocorrencia = 0;
    }
}
int tamanho(char *frase){
    int t = 0;
    int i = 0;
    while(frase[i] != NULL){
        t++;
        i++;
    }
    return t;
}
int analisa_caracter(Alfabeto alf[26], string frase, int tam){
    int maior_ocor = 0;
    for(int i = 0; i < 26; i++){
        char l[100];
        l[0] = alf[i].letra[0];
        for(int j = 0; j < tam; j++){
            if(l[0] == frase[j] || (frase[j]+32) == l[0]){
                alf[i].qnt_ocorrencia++;
            }
        }
        if(alf[i].qnt_ocorrencia > maior_ocor)maior_ocor = alf[i].qnt_ocorrencia;
    }
    frase[tam] = '\0';
    return maior_ocor;
}
int compara(const void *p1, const void *p2){
    Alfabeto *a1 = (Alfabeto*)p1;
    Alfabeto *a2 = (Alfabeto*)p2;
    if(a1->qnt_ocorrencia > a2->qnt_ocorrencia)return 1;
    else if(a1->qnt_ocorrencia < a2->qnt_ocorrencia)return -1;
    else{
        char l1[100];
        l1[0] = a1->letra[0];
        char l2[100];
        l2[0] = a2->letra[0];
        return (int)l1[0] - (int)l2[0];
    }
}
void print_maior_freq(Alfabeto alf[26], int maior){
    for(int i = 0; i < 26; i++){
        if(alf[i].qnt_ocorrencia == maior){
            cout<<alf[i].letra[0];
            alf[i].qnt_ocorrencia = 0;
        }
        alf[i].qnt_ocorrencia = 0;
    }
    cout<<endl;
}
int main(){
    Alfabeto letras[26];
    char frase[1000];
    preenche(letras);
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        scanf(" %[^\n]s", frase);
        int tam = tamanho(frase);
        int maior_qnt_ocor = analisa_caracter(letras, frase, tam);
        qsort(letras, 26, sizeof(Alfabeto), compara);
        print_maior_freq(letras, maior_qnt_ocor);

    }

}
