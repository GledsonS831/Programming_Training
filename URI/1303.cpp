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
void calcula_aver(Times *t1, long long t){
  for(int i = 1; i < t+1; i++){
    if(t1[i].pontos_sof == 0)t1[i].average = t1[i].pontos_marc;
    else t1[i].average = t1[i].pontos_marc/t1[i].pontos_sof;
  }
}
void processa_times(int t1, int p1, int t2, int p2, Times *times){
  
  atribui_p(&times[t1], p1, p2);
  atribui_p(&times[t2], p2, p1);
  if(p1 > p2){
    times[t1].ponto_camp+=2;
    times[t2].ponto_camp+=1;
  }
  else if(p1 < p2){
    times[t1].ponto_camp+=1;
    times[t2].ponto_camp+=2;
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
          return t1->id-t2->id;
        }
      }
    }
  
}
int main(){
  int casos = 1, time1, p1, time2, p2;
  Times times[101];
  times[0].qnt_insc = 100000;
  times[0].ponto_camp = -1;
  times[0].id = -99;
  int i = 1;
  while(casos != 0){
    for(int i = 1; i < 101; i++){
      times[i].pontos_sof = 0;
      times[i].pontos_marc = 0;
      times[i].qnt_insc = 0;
      times[i].average = 0.0;
      times[i].ponto_camp = 0;
      times[i].id = i;
  }
    cin>>casos;
    long long tam = (casos*(casos-1))/2;
    for(int j = 0; j < tam; j++){
      cin>>time1>>p1>>time2>>p2;
      processa_times(time1, p1, time2, p2, times);
    }
    
    calcula_aver(times, casos);
    qsort(times, casos+1, sizeof(Times), compara);
    cout<<"INSTANCIA "<<i<<endl;
    for(int j = 0; j < casos; j++){
      cout<<"camp-> "<<times[j].ponto_camp<<" "<<"time-> "<<times[j].id<<endl;
    }
    for(int j = 0; j < casos; j++){
      if(j != casos)cout<<times[j].id<<" ";
      else cout<<times[j].id<<endl;
    }
    if(i != 1)cout<<endl;
    i++;
  }



  return 0;
}