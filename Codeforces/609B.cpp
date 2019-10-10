#include <bits/stdc++.h>
using namespace std;
 
map<int, int > cria_mp(int m){
  map<int, int> mp;
  
  for(int i = 1; i <= m; i++)mp[i] = -1;
  return mp;
}
 
void find(int l[], int tam, map<int, int > mp){
  
  int qnt = tam-1;
  int soma = 0;
  mp[l[0]] = 0;
  for(int i = 1; i < tam; i++){
    mp[l[i]]++;
    //soma += qnt - mp[l[i]];
    //cout<<qnt-mp[l[i]]<<endl;
    soma += qnt-mp[l[i]];
    qnt--;
    
    
    
  }
  cout<<soma<<endl;
}
 
int main() {
  int n,m; 
  
  map<int, int> mp = cria_mp(m);
  int v;
  cin>>n>>m;
  int lista[n];
  for(int i = 0; i < n; i++){
    cin>>v;
    lista[i] = v;
  }
  find(lista, n, mp);  
  
}
