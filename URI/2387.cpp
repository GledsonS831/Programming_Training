#include <iostream>
#include <cstdlib>
using namespace std;
typedef struct{
  long long tempo_i;
  long long tempo_f;
  long long diferenca;
}Intervalos;

int compara_intervalo(const void *p1, const void *p2){
  Intervalos *i1 = (Intervalos*)p1;
  Intervalos *i2 = (Intervalos*)p2;
  return i2->tempo_i - i1->tempo_i;
  return 0;
}

int main(){
    long long n;
    long long horario_possivel[1000001];
    Intervalos inter[10001];

    for(long long i = 0; i < 1000001; i++){
        horario_possivel[i] = 0;
    }
    cin>>n;
    long long ini, fim;
    int qnt_consultas = 0;
    int ok = 1;
    for(long long i = 0; i < n;i++){
        cin>>ini;
        cin>>fim;
        inter[i].tempo_i = ini;
        inter[i].tempo_f = fim;
        inter[i].diferenca = (fim - ini);
    }
    qsort(inter, n+2, sizeof(Intervalos), compara_intervalo);
    
    for(int i = 0; i < n; i++){
      ok = 1;
      for(int j = inter[i].tempo_i; j < inter[i].tempo_f; j++){
        if(horario_possivel[j] == 1){
          ok = 0;
          break;
        }
      }
      if(ok == 1){
        for(int j = inter[i].tempo_i; j < inter[i].tempo_f; j++){
          horario_possivel[j] = 1;
        }
        qnt_consultas++;
      }
    }
    
    cout<<qnt_consultas<<endl;
    
}
