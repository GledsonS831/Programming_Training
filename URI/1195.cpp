#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

struct No{
  int v;
  struct No *esq;
  struct No *dir;
};


No* add_no(struct No *raiz, int v){
  struct No *novo;
  if(raiz == NULL){
    novo = (No*)malloc(sizeof(No));
    novo->v = v;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
  }
  else{
    if(v < raiz->v){
      raiz->esq = add_no(raiz->esq, v);
    }
    else if(v > raiz->v){
      raiz->dir = add_no(raiz->dir, v);
    }
  }

  return raiz;
}

void pre(struct No* raiz, vector<int> *v){
  if(raiz != NULL){
    //cout<<raiz->v<<" ";
    v->push_back(raiz->v);
    pre(raiz->esq, v);
    pre(raiz->dir, v);
  }

}
void ordem(struct No* raiz, vector<int> *v){
  if(raiz != NULL){
    ordem(raiz->esq, v);
    v->push_back(raiz->v);
    ordem(raiz->dir, v);
  }

}
void pos(struct No* raiz, vector<int> *v){
  if(raiz != NULL){
    pos(raiz->esq, v);
    pos(raiz->dir, v);
    v->push_back(raiz->v);
  }
}
int main(){
  struct No *no = NULL;
  vector<int> v_pre;
  vector<int> v_in;
  vector<int> v_pos;

  int casos = 0, qnt, n, tam_vector = 0;
  cin>>casos;
  for(int i = 0; i < casos; i++){
    no = NULL;
    cin>>qnt;
    for(int j = 0; j < qnt; j++){
      cin>>n;
      no = add_no(no, n);
    }

    cout<<"Case "<<i+1<<":"<<endl;
    cout<<"Pre.: ";
    pre(no, &v_pre);
    tam_vector =qnt;
    for(int k = 0; k < tam_vector; k++){
      cout<<v_pre[k];
      if(k != tam_vector-1){
        cout<<" ";
      }
    }
    cout<<endl;
    ordem(no, &v_in);
    cout<<"In..: ";
    for(int k = 0; k < tam_vector; k++){
      cout<<v_in[k];
      if(k != tam_vector-1){
        cout<<" ";
      }
    }
    cout<<endl;

    pos(no, &v_pos);
    cout<<"Post: ";
    for(int k = 0; k < tam_vector; k++){
      cout<<v_pos[k];
      if(k != tam_vector-1){
        cout<<" ";
      }
    }
    cout<<endl;
    cout<<endl;
    v_pre.clear();
    v_in.clear();
    v_pos.clear();
  }
}
