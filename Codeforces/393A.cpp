#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  string resp("nineteen");
  map<char, int > mp;
  string s;
  cin>>s;
 
  for(int i = 0; i < s.size(); i++){
 
    mp[s[i]]++;
  }
 
  mp['n'] = (mp['n']-1)/2;
  mp['e'] = mp['e']/3;
  int l[4] = {mp['n'],mp['i'], mp['e'], mp['t']};
  int menor = l[0];
  for(int i = 0; i < 4; i++){
    if(l[i] < menor)menor = l[i];
  }
  cout<<menor<<endl;
}
