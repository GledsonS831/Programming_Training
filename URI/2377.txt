#include <stdio.h>
#include <locale.h>
void main(){
	int l = 0;
	int d =  0;
	int k = 0;
	int p = 0;
	
	scanf("%d%d", &l,&d);
	scanf("%d%d", &k,&p);	
	int area = (l*k) + (l/d) *p;
	printf("%d\n", area);
}