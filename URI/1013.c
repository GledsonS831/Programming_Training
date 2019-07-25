#include <stdio.h>

int main(){
	int a  = 0, i = 0, maior = 0;
	
	for(i = 0; i<3; i++){
		scanf("%d", &a);
		if(a > maior){
			maior = a;
		}
	}
	printf("%d eh o maior\n", maior);
	return 0;
}