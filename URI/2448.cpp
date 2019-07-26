#include <iostream>
#include <cstdlib>
using namespace std;
long int busca_binaria(long int l_casas[45000], long int tam, long int encomenda){
  long int ini = 0, fim = tam-1;
  while(ini <= fim){
    
    long int meio = (ini+fim)/2;
    if(l_casas[meio] == encomenda){
      
      return meio;
    }
    else if(l_casas[meio] < encomenda){
      ini = meio+1;
    }
    else{
      fim = meio-1;
    }
  }
  return -1;
}
int main() {
  long int num_casas, num_encomendas;
  cin>>num_casas>>num_encomendas;
  long int casas[num_casas], encomendas[num_encomendas];
  long int n;
  for(long int i = 0; i < num_casas; i++){
    cin>>n;
    casas[i] = n;
  }
  for(long int i = 0; i < num_encomendas; i++){
    cin>>n;
    encomendas[i] = n;
  }
  long int atual = 0;
  long int endereco = 0;
  long int movimentos = 0;
  long int num = 0;
  for(int i = 0; i < num_encomendas;i++){
      num = busca_binaria(casas, num_casas, encomendas[i]);
      movimentos += abs(num-atual);
      atual = num;
        
  }
 
  cout<<movimentos<<endl;
}