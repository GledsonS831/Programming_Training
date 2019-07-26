#include <iostream>
#include <cstdio>
#include <queue>
#include <stack>
#include <list>

using namespace std;

int main(){
    int qnt;
    queue<int> fila;
    stack<int> pilha;
    list<int> lista;
    while(1){
        cin>>qnt;
        if(qnt==0)break;
        for(int i = qnt; i >=1 ; i--){
            lista.push_front(i);
        }

        while(qnt >= 2){
            fila.push(lista.front());
            lista.pop_front();
            lista.push_back(lista.front());
            lista.pop_front();
            qnt--;
        }
        cout<<"Discarded cards:";
        int t = fila.size();
        if(t > 1)cout<<" ";
        for(int i = 0; i < t; i++){
            if(i != t-1)cout<<fila.front()<<", ";
            else cout<<fila.front();
            fila.pop();
        }
        cout<<endl;
        cout<<"Remaining card: "<<lista.front()<<endl;
        lista.pop_front();

    }
}
