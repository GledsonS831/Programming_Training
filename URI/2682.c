#include <stdio.h>


int main() {
	int n = 0, anterior = 0, maior_v = 0, c=0;
	
	while (scanf("%d", &n) != EOF){
		if (c == 0){
			if (n < anterior){
				c++;
			}
			else{
				maior_v = n +1;	
			}	
		}
		anterior = n;
	}
	printf("%d\n", maior_v);
	return 0;
}
