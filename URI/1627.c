#include <stdio.h>

int main(){
	int h = 0, t = 0, at = 0, ad = 0, bt = 0, bd = 0, i = 0, j = 0, k = 0;
	int ca = 0, cb = 0;
	
	scanf("%d", &t);
	for(k = 0; k<t; k++){
		scanf("%d%d%d%d", &at, &ad, &bt, &bd);
		scanf("%d", &h);
		ca = ad;
		cb = bd;
		while (1){
			if (ca % ad == 0){
				h = h - at;
				//printf("Andre atacou %d pontos\n E o inimigo estao com %d hp\n", at, h);
			}
			if (h <= 0){
				printf("Andre\n");
				break;
			}
			if (cb % bd == 0){
				h = h - bt;
				//printf("Beto atacou %d pontos\n E o inimigo estao com %d hp\n", bt, h);
			}
			if (h <= 0){
				printf("Beto\n");
				break;
			}
			ca += 1;
			cb += 1;
		}
		
	}
	return 0;
}
