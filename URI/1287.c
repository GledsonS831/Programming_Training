#include <stdio.h>
#include <stdlib.h>

int main(){
	char name[1000];

	while((fgets(name, 1000, stdin)) != NULL){
      

      char number[1000];
      long long i = 0, x = -1, num = 0, error = 0;

      for(i = 0; name[i] != '\0'; i++){
        if(name[i] == ',' || name[i] == ' ') continue;
        else if(name[i] >= '0' && name[i] <= '9'){
          x++;
          number[x] = name[i];
        }
        else if(name[i] == 'l'){
          x++;
          number[x] = '1';
        }
        else if(name[i] == 'o' || name[i] == 'O'){
          x++;
          number[x] = '0';
        }
        else{
          error++;
        }
      }
      num = atoll(number);
      if(x == -1) printf("error\n");
      else if(num > 2147483647) printf("error\n");
      else if(error > 1) printf("error\n");
      else{
        printf("%lld\n", num);
      }
      for( i = 0; name[i] != '\0'; i++){
        name[i] = 0;
        number[i] = 0;
      }
    }
  return 0;
}
