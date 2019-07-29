#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

typedef struct{
    char numero[1000];
}Lista_telefonica;

int compara(const void *p1, const void *p2){
    Lista_telefonica *l1 = (Lista_telefonica*)p1;
    Lista_telefonica *l2 = (Lista_telefonica*)p2;
    long long v1, i = 0, j = 0;
    long long v2;
        if(l1->numero[0] > l2->numero[0])return -1;
        else if(l1->numero[0] < l2->numero[0])return 1;
        else{
            while(l1->numero[j] != NULL){
                if(l1->numero[j] > l2->numero[j])return -1;
                else if(l1->numero[j] < l2->numero[j])return 1;
                j++;
            }
        }

}

long long compara_numeros(char *n1, char *n2){
    long long i = 0, retirou = 0;
    bool ok;
    while(n1[i] != NULL){
        if(n1[0] == '!' && n2[0] != '!') break;
        if(n1[i] == n2[i]){
            if(n2[i] != '!')retirou++;
            n2[i] = '!';
        }
        else{
            break;
        }
    i++;
    }

    return retirou;
}
long long retira_lista(Lista_telefonica lf[100000], long long qnt){
    long long retirado = 0, total = 0, i = 0, j = 1;
        retirado = 0;
        bool teve = false;
        while(i < qnt-1){
            retirado = 0;
            while(j < qnt){
                retirado = 0;
                retirado = compara_numeros(lf[i].numero, lf[j].numero);
                total += retirado;
                j++;

            }
            i++;
            j = i+1;

        }

    return total;
}

int main(){
    long long qnt;
    while(cin>>qnt){
        Lista_telefonica lista_t[qnt];
        long long economizados = 0, tam = 0;
        for(long long i = 0; i < qnt; i++){
            cin>>lista_t[i].numero;
        }
        qsort(lista_t, qnt, sizeof(Lista_telefonica), compara);
        economizados = retira_lista(lista_t, qnt);
        cout<<economizados<<endl;
    }
}
