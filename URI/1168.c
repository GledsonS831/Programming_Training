#include <stdio.h>
#include <math.h>

int main(){
	int n  = 0, i = 0, led = 0, j = 0;
	char v[1000];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		led = 0;
		scanf("%s", &v);
		for(j=0; v[j] != '\0'; j++){
			if(v[j] == '1') led = led + 2;
			else if (v[j] == '2') led = led + 5;
			else if (v[j] == '3') led = led + 5;
			else if (v[j] == '4') led = led + 4;
			else if (v[j] == '5') led = led + 5;
			else if (v[j] == '6') led = led + 6;
			else if (v[j] == '7') led = led + 3;
			else if (v[j] == '8') led = led + 7;
			else if (v[j] == '9') led = led + 6;
			else if (v[j] == '0') led = led + 6;
			}
			
		printf("%d leds\n", led);
		}
		
	
	
	return 0;
}
	
