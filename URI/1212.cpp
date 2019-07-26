#include <iostream>
#include <iostream>
#include <cstdio>
#include <string.h>
#include <algorithm>
using namespace std;
int main() {
  char num1[50], num2[50];
  char num1_aux[50], num2_aux[50];
  
  while(1){
    cin>>num1;
    cin>>num2;
    int tam1 = strlen(num1);
    int tam2 = strlen(num2);
    if((tam1 == 1 && num1[0] == '0') &&(tam2 == 1 && num2[0] == '0')) break;
    int maior = 0;
    if(tam1 > maior) maior = tam1;
    else maior = tam2;
    for(int i = 0, j = tam2-1; i < tam2; i++, j--){
      num2_aux[j] = num2[i];
    }
    for(int i = 0, j = tam1-1; i < tam1; i++, j--){
      num1_aux[j] = num1[i];
    }
    for(int i = tam1; i < 9; i++){
      num1_aux[i] = '0';
    }
    for(int i = tam2; i < 9; i++){
      num2_aux[i] = '0';
    }

    int soma = 0;
    int dig1 = 0;
    int dig2 = 0;
    int carry = 0;
    int vai_um = 0;   
    
    for(int i = 0; i < 9; i++){
      dig1 = num1_aux[i] - 48;
      dig2 = num2_aux[i] - 48;
      
      soma = dig1 + dig2 + vai_um;
      
      if(soma > 9){       
        carry++;
        vai_um = 1;
      }
      else{
        vai_um = 0;
      }
    }
    if(carry == 0) cout<<"No carry operation."<<endl;
    else if(carry == 1) printf("%d carry operation.\n", carry);
    else printf("%d carry operations.\n", carry);
  }
}