#include <iostream>
using namespace std;

int main() {
  int n;
  string l1;
  string l2;
  cin >> n;

  for(int i = 0 ; i < n; i++){
    cin >> l1 >> l2;
    int t1 = 0;
    int t2 = 0;
    int maior_1 = 1;
    while(t1 < l1.size() || t2 < l2.size()){
      if (t1 < l1.size()){
        cout << l1[t1++];
      }
      if(t2 < l2.size()){

        cout<< l2[t2++];
      }
      
    }
    cout << "\n";
  }
}