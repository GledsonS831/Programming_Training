#include <iostream>
#include <cstdlib>

using namespace std;
typedef struct{
  long long qnt_insc;
  long long int ponto_camp;
  long double pontos_marc;
  long double pontos_sof;
  long double average;
  long long id;
}Times;

void atribui_p(Times *time, int pm, int ps){
    time->pontos_marc += pm;
    time->pontos_sof += ps;
}

void processa_times(int t1, int p1, int t2, int p2, Times *times){

  atribui_p(&times[t1-1], p1, p2);
  atribui_p(&times[t2-1], p2, p1);
  if(p1 > p2){
    times[t1-1].ponto_camp+=2;
    times[t2-1].ponto_camp+=1;
  }
  else if(p1 <= p2){
    times[t1-1].ponto_camp+=1;
    times[t2-1].ponto_camp+=2;
  }
}


void calcula_aver(Times *t1, long long t){
  for(int i = 0; i < t; i++){
    if(t1[i].pontos_sof == 0)t1[i].average = t1[i].pontos_marc;
    else t1[i].average = t1[i].pontos_marc/t1[i].pontos_sof;
  }
}


int compara(const void *p1, const void *p2){
  Times *t1 = (Times*)p1;
  Times *t2 = (Times*)p2;

    if(t1->ponto_camp > t2->ponto_camp)return -1;
    else if(t1->ponto_camp < t2->ponto_camp)return 1;
    else{
      if(t1->average > t2->average){
        return -1;
      }
      else if(t1->average < t2->average)return 1;
      else{
        if(t1->pontos_marc > t2->pontos_marc)return -1;
        else if(t1->pontos_marc < t2->pontos_marc)return 1;
        else{
          if(t1->id > t2->id)return -1;
          else return 1;
        }
      }
    }

}
int main(){
  int casos = 1, time1, p1, time2, p2;
  int k = 0;
  Times times[101];
  while(1){
    for(int i = 0; i < 101; i++){
      times[i].pontos_sof = 0;
      times[i].pontos_marc = 0;
      times[i].qnt_insc = 0;
      times[i].average = 0.0;
      times[i].ponto_camp = 0;
      times[i].id = i+1;
  }
    cin>>casos;

    if(casos == 0)break;
    if(k != 0)cout<<endl;
    k++;
    long long tam = (casos*(casos-1))/2;

    for(long long j = 0; j < tam; j++){
      cin>>time1>>p1>>time2>>p2;

      processa_times(time1, p1, time2, p2, times);
    }

    calcula_aver(times, casos);
    qsort(times, casos, sizeof(Times), compara);
    cout<<"Instancia "<<k<<endl;
    for(long long i = 0; i < casos; i++){
      if(i != casos-1)cout<<times[i].id<<" ";
      else cout<<times[i].id;
    }
    cout<<endl;
  }

  return 0;
}

