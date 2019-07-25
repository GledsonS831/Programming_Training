#include <stdio.h>

int main(){
	int n = 0, t = 0, l = 0, s = 0, palice = 0, pbob = 0, i = 0;
	
	scanf("%d%d%d", &n, &t, &l);
	for(i=1; i<n; i++){
		scanf("%d", &s);
		int d = t-s;
		if(i % 2 != 0){
			if(d < 0){
				d = d *(-1);
				}
			if(d <= l){
				palice += d ;
				t = s;
				}
			
		}
		if (i%2 ==0){
			if (d < 0){
				d = d*(-1);
			}
			if(d <= l){
				pbob += d;
				t = s;
			}
		}
	}
  printf("%d %d\n", palice, pbob);
	return 0;
	
}