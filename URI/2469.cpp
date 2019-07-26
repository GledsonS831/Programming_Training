#include <iostream>
using namespace std;

int main() {
  int notas[101] = {};
  int alunos;
  cin>>alunos;
  for(int i = 0; i < alunos; i++){
    int num;
    cin>>num;
    notas[num] += 1;
  }
  int maior = 0;
  for(int i = 0; i < 101; i++){
    if(notas[i] > maior){
      maior = notas[i];
    }
  }
  int maior_aluno = 0;
  for(int i = 0; i < 101; i++){
    if(notas[i] == maior){
      if(i > maior_aluno){
        maior_aluno = i;
      }
    }
  }
  cout<<maior_aluno<<endl;
}