#include <stdio.h>

int main(){
	int hi = 0, mi = 0, hf = 0, mf = 0, H=0, M=0, hora=0,tm= 0;
	
	scanf("%d%d%d%d", &hi, &mi, &hf, &mf);
	if (hi < hf){
		H = hf - hi;
		tm = H * 60;
		if (mi < mf){
			tm = tm + (mf - mi);
		}
		else if (mi >= mf){
			tm = tm - (mi - mf);
		}
	}
	else if (hi > hf){
		H = 24 -(hi - hf);
		tm = H * 60;
		if (mi < mf){
			tm = tm + (mf - mi);
		}
		else if (mi >= mf){
			tm = tm - (mi - mf);
		}
		
	}
	else if (hi == hf){
		if (mi < mf){
			tm = (mf - mi);
		}
		else if (mi == mf) {
			tm = 24*60;
		}
		else if (mi > mf){
			tm = (mi - mf);
		}
		
	}
	
	
	if (tm < 0){
		tm = tm * -1;
	}
	
	hora = tm / 60;
	tm = tm % 60;
	
	
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, tm);
	
}