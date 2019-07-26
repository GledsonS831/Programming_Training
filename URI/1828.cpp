#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
int main() {
    int n;
    string sheldon, raj;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>sheldon;
        cin>>raj;
        cout<<"Caso #"<<i+1<<":"<<" ";
        if(sheldon == raj) cout<<"De novo!"<<endl;
        else if(sheldon == "papel"){
            if(raj == "pedra" || raj == "Spock"){
                cout<<"Bazinga!"<<endl;
            }
            else{
                cout<<"Raj trapaceou!"<<endl;
            }
        }
        else if(sheldon == "pedra"){
            if(raj == "lagarto" || raj == "tesoura"){
                cout<<"Bazinga!"<<endl;
            }
            else{
                cout<<"Raj trapaceou!"<<endl;
            }
        }
        else if(sheldon == "tesoura"){
            if(raj == "papel" || raj == "lagarto"){
                cout<<"Bazinga!"<<endl;
            }
            else{
                cout<<"Raj trapaceou!"<<endl;
            }
        }
        else if(sheldon == "lagarto"){
            if(raj == "Spock" || raj == "papel"){
                cout<<"Bazinga!"<<endl;
            }
            else{
                cout<<"Raj trapaceou!"<<endl;
            }
        }
        else if(sheldon == "Spock"){
            if(raj == "pedra" || raj == "tesoura"){
                cout<<"Bazinga!"<<endl;
            }
            else{
                cout<<"Raj trapaceou!"<<endl;
            }
        }
    }

}
