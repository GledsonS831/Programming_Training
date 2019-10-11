#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int main() {
  int n, m; cin>>n>>m;
  map<char, int> mp[m];
  char r;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin>>r;
      mp[j][r] += 1;
    }
  }
  int lista[m];
  for(int i = 0; i < m; i++)cin>>lista[i];
  int maior = 0;
  int pontos = 0;
  for(int i = 0; i < m; i++){
    
    maior = 0;
    for(auto j = mp[i].begin(); j != mp[i].end(); j++){
      
      if(j->second > maior)maior = j->second;
    }
    pontos += maior*lista[i];
  }
  cout<<pontos<<endl;
}
