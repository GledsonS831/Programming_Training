#include <iostream>
using namespace std;
int main() {
  int qnt_dig, qnt_rem;
  string numbers;
  while(1){
    cin>>qnt_dig>>qnt_rem;
    if(qnt_dig == 0 && qnt_rem == 0)break;
    cin>>numbers;
    bool pos_usada[qnt_dig];
    int i = 0, j= 1;
    while(i < qnt_dig && qnt_rem > 0){
      if(numbers[i] - 30 < numbers[i+1] - 30){
        
        numbers.erase(i, 1);
        if(i > 0) i--;
        else i = 0;
        qnt_dig--;
        qnt_rem--;
      }
      else{
        i++;
      }
    }
    while(qnt_rem  > 0){
      numbers.erase(qnt_dig-1, 1);
      qnt_dig--;
      qnt_rem--;
    }
    cout<<numbers<<endl;
  }
}
