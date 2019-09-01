#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int comp(const void *p1, const void *p2){
    if(*(int*)p2 > *(int*)p1){
        return 1;
    }
    else{
        return -1;
    }    
}
int main(){
    int a, b, c, x, y;
    int cartas_boy[2], cartas_girl[3], usadas[54];
    int maiores_c, qnt_maior, carta_mecessaria;
    while(1){
        cin >> a >> b >> c >> x >> y;
        if(0 == a == b == c == x == y)break;
        for(int i = 0; i < 54; i++)usadas[i] = 0;
        usadas[a] = 1; usadas[b] = 1; usadas[c] = 1; usadas[x] = 1; usadas[y] = 1;

        cartas_girl[0] = a; cartas_girl[1] = b; cartas_girl[2] = c; cartas_boy[0] = x; cartas_boy[1] = y;

        qsort(cartas_girl, 3, sizeof(int), comp);
      
        qsort(cartas_boy, 2, sizeof(int), comp);
      

        maiores_c = 0;
        qnt_maior = 0;
        int maior;
        for(int i = 0; i < 2; i++){
            if(cartas_boy[i] > cartas_girl[i])maiores_c++;
        }
        if(maiores_c == 0)cout<<-1<<endl;
        else{
            for(int i = 0; i < 2; i++){
                qnt_maior = 0;
                for(int j = 0; j < 3; j++){
                    if(cartas_boy[i] > cartas_girl[j]) qnt_maior++;
                }
                if(i == 0){
                    
                    if(qnt_maior == 1 ){carta_mecessaria = cartas_girl[0]+1; break;}
                    else if(qnt_maior == 2){carta_mecessaria = cartas_girl[1]+1; break;}
                    else if(qnt_maior == 0){
                      carta_mecessaria = cartas_girl[0]+1;
                      break;
                      }
                }
                else{
                    if(qnt_maior == 1 ){carta_mecessaria = cartas_girl[0]+1; }
                    else if(qnt_maior == 2){carta_mecessaria = cartas_girl[1]+1; }
                    else if(qnt_maior == 0){carta_mecessaria = cartas_girl[0]+1;}
                    else carta_mecessaria = 1;
                }
            }
            int c = 0;
            for(int i = carta_mecessaria; i < 54; i++){
                if(!usadas[i]){
                    c = i;
                    break;
                }
            }
            if(c == 53)cout<<-1<<endl;
            else cout<< c <<endl;
        }
        
        
    }
    return 0;
}
