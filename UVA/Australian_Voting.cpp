#include <iostream>
#include <cstdio>
#include <sstream>
using namespace std;

int Menor(int votos_cand[21],bool cand_valido[21], int qnt_cand){
    int menor;
    for(int i = 1; i < qnt_cand+1; i++){
        if(cand_valido[i] == true){
            menor = votos_cand[i];
            break;
        }
    }
    for(int i = 1; i < qnt_cand+1; i++){
        if(votos_cand[i] < menor && cand_valido[i] == true){
            menor = votos_cand[i];
        }
    }
    return menor;
}

int Maior(int votos_cand[21],bool cand_valido[21], int qnt_cand){
    int maior;
    for(int i = 1; i < qnt_cand+1; i++){

        if(cand_valido[i] == true){
            maior = votos_cand[i];

            break;
        }
    }
    for(int i = 1; i < qnt_cand+1; i++){
        if(votos_cand[i] > maior && cand_valido[i] == true){
            maior = votos_cand[i];
        }
    }
    return maior;
}

void Elimina_menor(bool cand_valido[21], int votos_cand[21], int menor_valor, int qnt_cand){
    for(int i = 1; i < qnt_cand+1; i++){
        if(votos_cand[i] == menor_valor){
            cand_valido[i] = false;
        }
    }
}

void ceder_vaga(bool cand_valido[21], int tam, int qnt_cand, int cedulas[][1001], int cedula[1001]){
  for(int i = 1; i < tam; i++){
    int c = cedula[i];
    if(cand_valido[c] == false){
      for(int j = 2; j < qnt_cand+1; j++){
        int c2 = cedulas[i][j];
        if(cand_valido[c2] == true){
          cedula[i] = c2;
          cedulas[i][j] = c;
          break;
        }
      }
    }
  }

}

int unico_vencedor(int cedulas[][1001], int cedula[1001], int qnt_cand, int tam, bool cand_valido[21]){
    int votos_cand[21] = {};
    for(int i = 1; i < tam; i++){
        cedula[i] = cedulas[i][1];
        int cand = cedula[i];
        votos_cand[cand]++;
      }
    while(true){
        for(int i =1; i < qnt_cand+1; i++){
          votos_cand[i] = 0;
        }
        for(int i = 1; i < tam; i++){
          int cand = cedula[i];
          votos_cand[cand]++;
      }
        int metade = tam / 2;
        int maior = Maior(votos_cand, cand_valido, qnt_cand);
        int menor = Menor(votos_cand, cand_valido, qnt_cand);

        if(maior > metade){
          for(int j = 1; j < qnt_cand+1; j++){
            if(votos_cand[j] == maior){
              return j;
            }
          }
        }
        if(maior == menor){
          break;
        }

        else if(maior != menor){
            Elimina_menor(cand_valido, votos_cand, menor, qnt_cand);
            ceder_vaga(cand_valido, tam, qnt_cand, cedulas, cedula);

        }
    }
    return -1;
}

void adiciona_matriz(int cedulas[][1001], int linha, int tam, string numeros_linha){
    string num;
    int valor = 0, c = 1;
    for(int i = 0; i < tam; i++){
        if(numeros_linha[i] != ' '){
            num.push_back(numeros_linha[i]);
            if(i == tam -1){

                stringstream s(num);
                s >> valor;
                cedulas[linha][c++] = valor;
                num.clear();
            }
        }
        else{
            stringstream s(num);
            s >> valor;

            cedulas[linha][c++] = valor;
            num.clear();
        }
    }
}
int main(){
    int casos;
    cin>>casos;
    int cedula[1001] = {};
    bool cand_valido[21];
    char nomes[21][21];
    int cedulas[1001][1001];
    int qnt_cand;
    int v;

    for(int i = 0; i < casos; i++){
        for(int j = 0; j < 21; j++)cand_valido[j] = true;
            int cedulas[1001][1001];
            cin>>qnt_cand;

            for(int j = 0; j < qnt_cand; j++){
                scanf(" %[^\n]s", nomes[j]);
                cin.ignore();
            }

            int linha = 1, qnt = 0, n, c= 0;
            string numeros_linhas;

            while(true){
              c=0;
              getline(cin, numeros_linhas);
              if(numeros_linhas == ""){
                break;
              }
              int t = numeros_linhas.size();
              adiciona_matriz(cedulas, linha, t, numeros_linhas);
              linha++;

            }
            if(i != 0)cout<<endl;
            int vencedor = unico_vencedor(cedulas, cedula, qnt_cand, linha, cand_valido);
            if(vencedor==-1){
              for(int j = 1; j < qnt_cand+1; j++){
                if(cand_valido[j] != false){
                  int c = 0;
                  while(nomes[j-1][c] != NULL){
                    cout<<nomes[j-1][c];
                    c++;
                  }
                  cout<<endl;
                }
              }
            }
            else{
                  int c = 0;
                  while(nomes[vencedor-1][c] != NULL){
                    cout<<nomes[vencedor-1][c];
                    c++;
                  }
                  cout<<endl;

              }
        }

}
