#include <bits/stdc++.h>

using namespace std;

int countQAQ(string word){
    string aux("QAQ");
    int ocorrencies = 0;
    int size = word.size();

    for(int i = 0; i < size; i++){
        if(word[i] == 'Q'){
            for(int j = i + 1; j < size; j++){
                if(word[j] == 'A'){
                    for(int k = j + 1; k < size; k++){
                        if(word[k] == 'Q'){
                            ocorrencies++;
                        }
                    }
                }
            }
        }
    }
    return ocorrencies;
}




int main(){
    string word; cin >> word;
    cout << countQAQ(word) << endl;
}