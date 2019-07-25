#include <stdio.h>
#include <string.h>
int main(){
	char animal1[20];
	char animal2[20];
	char animal3[20];
	
	scanf("%s", animal1);
	scanf("%s", animal2);
	scanf("%s", animal3);
	
	int an0, an1, an00, an01, an000, an001, an010, an011;
	int an10, an11, an100, an101, an110, an111;
	
	an0 = strcmp(animal1, "vertebrado");
	an1 = strcmp(animal1, "invertebrado");
	an00 = strcmp(animal2, "ave");
	an01 = strcmp(animal2, "mamifero");
	an000 = strcmp(animal3, "carnivoro");
	an001 = strcmp(animal3, "onivoro");
	an010 = strcmp(animal3, "onivoro");
	an011 = strcmp(animal3, "herbivoro");
	an10 = strcmp(animal2, "inseto");
	an11 = strcmp(animal2, "anelideo");
	an100 = strcmp(animal3, "hematofago");
	an101 = strcmp(animal3, "herbivoro");
	an110 = strcmp(animal3, "hematofago");
	an111 = strcmp(animal3, "onivoro");
	
	if (!an0){
		if (!an00){
			if (!an000){
				printf("aguia\n");
			}
			
			else if (!an001){
				printf("pomba\n");
			}
			
		}
		else if (!an01){
			if (!an010) {
				printf("homem\n");
			}
			else if (!an011){
			 	printf("vaca\n");
			}
		}
	}
	else if (!an1){
		if (!an10){
			if (!an100) printf("pulga\n");
			else if (!an101) printf("lagarta\n");
		}
		else if (!an11){
			if (!an110) printf("sanguessuga\n");
			else if (!an111) printf("minhoca\n");
		}
	}
	
	
}