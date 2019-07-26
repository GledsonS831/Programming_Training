#include <iostream>
using namespace std;

int main() {
  int l, c;
  cin>>l>>c;
  int ok = 1;
  int limite = -1;
  int verifica = 1;
  int first_num_zero = 0;
  for(int i = 0; i < l; i++){
   first_num_zero = c;
    for(int j = 0; j < c; j++){
      int n;
      cin>>n;
      if(n != 0){
        if(j <= limite){
        ok = 0;
      }
      if(verifica){
        first_num_zero = j;
        verifica = 0;
        }
      }
    }
    limite = first_num_zero;
    verifica = 1;
    
  }
  if(ok) cout<<"S"<<endl;
  else cout<<"N"<<endl;
}