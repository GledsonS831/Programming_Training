#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main(){
    char exp[31];
    int casos;
    cin>>casos;
    cin.ignore();
    map<string, int> arv;
    for(int i = 0; i < casos; i++){
        double t = 0;
        string s;
        arv.clear();
        if(i != 0)cout<<endl;
        cin.ignore();
        while(getline(cin, s, '\n')){
            if(s.size() == 0)break;
            arv[s]++;
            t++;
            if(t==75)break;
        }
        map<string, int>::iterator j;
        for(j = arv.begin(); j != arv.end(); j++){
            double v = (j->second/t)*100;
            cout<<j->first;
            printf(" %.4lf\n", v);
        }

    }
}
