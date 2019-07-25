#include <stdio.h>
#include <string.h>

int main(){
	int a = 0, b = 0;
	
	scanf("%d%d", &a, &b);
	
	if (a >= b) printf("%d\n", a);
	else printf("%d\n", b);
	return 0;
}