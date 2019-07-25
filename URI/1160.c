#include <stdio.h>

int main(){
	int t=0, pa = 0, pb = 0, i = 0, counta = 0, countb = 0, ano = 0;
	double ga = 0.0, gb = 0.0;
	
	scanf("%d", &t);
	
	for(i; i<t;i++){
		scanf("%d%d%lf%lf", &pa, &pb, &ga, &gb);
		ano  =0;
		while (pa <= pb){
			pa = pa + (pa*(ga/100));
			pb = pb + (pb*(gb/100));
			ano = ano += 1;
			if (ano > 100){
				printf("Mais de 1 seculo.\n");
				break;
			}
		}
		if (ano <= 100)printf("%d anos.\n", ano);
	}
}