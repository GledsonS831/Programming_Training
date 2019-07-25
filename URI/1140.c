#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
  while(1){
    char name[1001];
    char first[1001];
    int i = 0, x = 1, y = 1, letra = 1, palavra = 0;
    fgets(name, 1001, stdin);
    for(i = 0; name[i] != '\0'; i++){
      name[i] = tolower(name[i]);
    }
    if(name[0] == '*') break;
    for(i = 0; name[i] != '\0'; i++){
      if(name[i] != ' '){
        first[0] = name[i];
        break;
      }
    }

    for(i = 0; name[i] != '\0'; i++){
        if(name[i] == ' '){
          x = 1;
        }
        else if(x && name[i] == first[0] && name[i] != 32){
          letra = 1;
          x = 0;
        }
        else if (x && name[i] != first[0]){
          letra = 0;
        }
        if(letra == 0) break;
      }
      if(letra) printf("Y\n");
      else printf("N\n");
  }
  return 0;
}
