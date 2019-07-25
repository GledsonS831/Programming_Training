#include <stdio.h>

int main(){
	
	int n = 0, j=0, i = 0, c = 0;
	scanf("%d", &n);
  getchar();
	for(j =0; j<n; j++){
    char nome[51];
		gets(nome);
    int letra = 1;
		for(i = 0; nome[i] != '\0'; i++){
			if (nome[i] == ' '){
				letra = 1;
			}

			else if(letra){
				printf("%c", nome[i]);
				letra = 0;
				}
			}
		printf("\n");
	}
	return 0;
}
