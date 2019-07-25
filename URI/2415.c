#include <stdio.h>

int main(){
	int n = 0, v = 0, i = 0, maior_num = 0,count = 0, count_maior = 0;
	scanf("%d", &n);
	int lista[n];
	for (i = 0; i<n; i++){
		scanf("%d", &lista[i]);
	}
	maior_num = lista[0];
	for (i = 0; i<n; i++){
		if (lista[i] == maior_num){
			count += 1;
		}
		if(count > count_maior){
			count_maior = count;
		}
		else if (lista[i] != maior_num){
			maior_num = lista[i];
			count = 1;
		}
	}
	printf("%d\n", count_maior);
	
}