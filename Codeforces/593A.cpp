#include <bits/stdc++.h>

using namespace std;

map<string, int> count_dif(string s, map<string, int> duo){
    int ocorr = 0, i = 0;
    map<char, int> ocorrencies;
    map<string, int> ini = duo;
    string aux;
    int size = 0;
    map<string, int>::iterator it_duo;
    while(s[i]){
        
        size++;
        ocorrencies[s[i]]++;
        if(ocorrencies[s[i]] == 1){
            ocorr++;
            if(aux.empty()){
                aux.push_back(s[i]);
            }
            else{
                if(aux[0] > s[i]){
                    char a = aux[0];
                    aux[0] = s[i];
                    aux.push_back(a);
                }
                else{
                    aux.push_back(s[i]);
                }
            }
        }
        i++;
    }
    if(ocorr == 1){
        duo[aux] += size;
        for(it_duo = duo.begin(); it_duo != duo.end(); it_duo++){
            if( ( it_duo-> first[0] == aux[0] || it_duo-> first[1] == aux[0]) && aux != it_duo-> first){
                duo[it_duo-> first] += size;
            }
            
        }
    }
    else if(ocorr == 2){
        duo[aux] += size;
    }
    else{
        return ini;
    }
    return duo;
}

int main(){
    int cases; cin >> cases;
    
    string word;

    map<char, bool> ocorrencies;
    map<char, bool>::iterator it1;
    map<char, bool>::iterator it2;
    for(int i = 97; i <= 122; i++){
        ocorrencies[(char)i] = false;
    }

    string arr_Str[cases];
    int j = 0;
    for(int i = 0; i < cases; i++){
        j = 0;
        cin >> arr_Str[i];
        while(arr_Str[i][j]) {
            ocorrencies[arr_Str[i][j]] = true;
            j++;
        }
    }
    
   

    map<string, int> duo;
    map<string, int>::iterator it_duo;
    for(it1 = ocorrencies.begin(); it1 != ocorrencies.end(); it1++){
        for(it2 = it1 ; it2 != ocorrencies.end(); it2++){
            if( it1 != it2 and it1-> second == true and it2-> second == true){
                string aux;
                aux.push_back(it1->first);
                aux.push_back(it2->first);
                duo[aux] = 0;
                aux.clear();
            }
        }
    }
    
    for(int l = 0; l < cases; l++){
        duo = count_dif(arr_Str[l], duo);
        
    }
    int biggest = 0;

    for(it_duo = duo.begin(); it_duo != duo.end(); it_duo++){
        if(it_duo -> second > biggest)biggest = it_duo -> second;
    }
    cout << biggest << endl;
    return 0;
}