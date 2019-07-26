#include <iostream>
using namespace std;
int main() {
  int n;
  int k;
  int aluno;

  int l[100];
  while(1){
    cin>>n;
    int dedurado[n];
    if(n==0)break;
    for(int i = 1; i < n+1; i++){
        cin>>aluno;
        dedurado[i] = aluno;
    }
    cin>>k;
    while(1){
        if(dedurado[k] == k){
            cout<<k<<endl;
            break;
        }
        else{
            k = dedurado[k];
        }
    }

  }
}
