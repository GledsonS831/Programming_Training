#include <stdio.h>

int main(){
  int j = 2, tam = 0, num = 0, isprimo = 0, c = 0;
  scanf("%d", &tam);
  
  while (c != tam){
    c = c + 1;
    
  	scanf("%d", &num);	
  	for(j=2;j<num;j++){
  		if (num % j == 0){
  			isprimo = isprimo + 1;
		  }
	  }
	if (isprimo == 0){
		printf("%d eh primo\n", num);
	}
	else{
		printf("%d nao eh primo\n", num);
	}
	isprimo = 0;
  }
  
  return 0; 
}