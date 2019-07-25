#include <stdio.h>

void main(){
	long t, h, m, s;
	h =0;
	m = 0;
	s = 0;
	scanf("%ld", &t);
	
	if (t >= 3600){
		h = t / 3600;
		t = t % 3600;
		
	}
	if ((t >= 60) || (t < 3600)){
		m = t / 60;
		t = t % 60;


	}
	if ((t > 0) || (t < 60)){
		s = t / 1;
		t = s;
		
	}

	printf("%ld:%ld:%ld\n", h, m, s);
}