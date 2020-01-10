#include <bits/stdc++.h>

using namespace std;

int main(){
    int pos;

    cin >> pos;

    int steps = 0, count  = 5;

    while(count > 0){
        steps += pos / count;
        pos -= (pos / count) * count;
        count--;
    }
    cout << steps << endl;
   
}