#include <iostream>

using namespace std;

int main(){
    int i, j;
    while(cin>>i && cin>>j){
        int maior = 0, compr = 0;
        int i_menor, j_maior;
        if(i < j){
            i_menor = i;
            j_maior = j;
        }
        else{
            i_menor = j;
            j_maior = i;
        }
        for(int a = i_menor; a <= j_maior; a++){
            compr = 1;
            int aux = a;
            while(aux != 1){

                if(aux % 2 == 0){
                    aux = aux / 2;
                }
                else {
                    aux = aux* 3 + 1;
                }
                compr++;
            }
            if(compr > maior)maior = compr;
        }
        cout<<i<<" "<<j<<" "<<maior<<endl;
    }
}
