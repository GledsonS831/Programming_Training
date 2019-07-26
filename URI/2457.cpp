#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main() {
  char letra;
  char texto[1000];
  string palavras[1000];

  cin>>letra;
  scanf(" %[^\n]s", texto);
  int index_palavra = 0;
  for(int i = 0; texto[i];i++){
    if(texto[i] == ' ')index_palavra++;
    else palavras[index_palavra] += texto[i];
  }
  double count_p = 0;
  for(int i = 0; i <= index_palavra; i++){
    int v = 0;
    for(int j = 0; palavras[i][j]; j++){
      if(palavras[i][j] == letra && v == 0){
        count_p++;
        v = 1;
      }
    }
  }
  double r = (count_p/(index_palavra+1));  
  printf("%.1lf\n", r*100);
  
}