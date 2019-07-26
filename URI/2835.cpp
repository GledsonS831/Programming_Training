#include <iostream>
#include <cstdlib>

int ordena(const void *a, const void *b){
  int *p1 = (int*)a;
  int *p2 = (int*)b;
  return *p1 - *p2;
}

using namespace std;
int main() {
  int n;
  cin>>n;
  int pesos[n+1];
  pesos[0] = 0;
  int v;
  for(int i = 1; i < n+1;i++){
    cin>>v;
    pesos[i] = v;
  }
  
  qsort(pesos, n+1, sizeof(int), ordena);
  for(int i = 0; i < n;i++){
    if(pesos[i+1] - pesos[i] > 8){
      cout<<"N"<<endl;
      return 0;
    }
  }
  cout<<"S"<<endl;
}