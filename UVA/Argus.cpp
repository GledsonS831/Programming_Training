#include <bits/stdc++.h>
using namespace std;

typedef struct{
  string id;
  int valor;
}Argus;

int main() {
  string reg;
  int v, k, id;
  Argus argus[100000];
  map<int, int > mp;
  priority_queue<pair<int, int> > pq;
  int tam_pq = 0;
  while(1){
    cin>>reg;
    if(!reg.compare("#")){
      break;
    }
    cin>>id;
    cin>>v;
    mp[-id] = -v;
    pq.push(make_pair(-v, -id));
  }
  cin>>k;
  while(k--){
    cout<<-pq.top().second<<endl;
    int menor = pq.top().first;
    pq.push(make_pair(menor+mp[pq.top().second], pq.top().second));
    pq.pop();
  }
 

}