#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <queue>
#include <stack>
#include <algorithm>
#include <vector>

using namespace std;
int compara(const void *p1, const void *p2){
    int *n1 = (int*)p1;
    int *n2 = (int*)p2;
    return *n2 - *n1;
}

bool eh_f(int elem, queue<int> *f){
    if(f->front() == elem){
        f->pop();
        return true;
    }
    else return false;
}

bool eh_p(int elem, stack<int> *p){
    if(p->top() == elem){
        p->pop();
        return true;
    }
    else return false;

}

bool eh_Fp(int elem, priority_queue<int> *fp){
    if(fp->top() == elem){
        fp->pop();
        return true;
    }
    else return false;

}

int main(){
    int tipo, elem, qnt, est;
    stack<int> pilha;
    queue<int> fila;
    priority_queue<int> pf;
    bool p, f, p_f;
    while(cin>>qnt){
        est = 0;
        f = true;
        p = true;
        p_f = true;
        for(int i = 0; i < qnt; i++){
            cin>>tipo;
            cin>>elem;
            if(tipo == 1){
                pilha.push(elem);
                fila.push(elem);
                pf.push(elem);
            }
            else{
                if(f)f = eh_f(elem, &fila);
                if(p)p = eh_p(elem, &pilha);
                if(p_f)p_f = eh_Fp(elem, &pf);
            }

        }
        if(f == true)est++;
        if(p==true)est++;
        if(p_f==true)est++;
        if(est == false)cout<<"impossible"<<endl;
        else if(est == true){
            if(f == true)cout<<"queue"<<endl;
            else if(p == true)cout<<"stack"<<endl;
            else cout<<"priority queue"<<endl;

            }
        else cout<<"not sure"<<endl;
        while(!pilha.empty()){
            pilha.pop();
        }
        while(!fila.empty())fila.pop();
        while(!pf.empty())pf.pop();
    }

}
