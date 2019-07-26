#include <iostream>

using namespace std;

int main(){
    int n = 1;
    while(1){
        cin>>n;
        if(n == 0)break;
        int j;
        int joao = 0;
        int maria =0;
        for(int i = 0; i < n; i++){
            cin>>j;
            if(j == 0) maria++;
            else joao++;
        }
        cout<<"Mary won "<<maria<<" "<<"times and John won "<<joao<<" times"<<endl;
    }


}
