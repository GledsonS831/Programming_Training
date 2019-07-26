#include <iostream>
#include <string.h>
using namespace std;

int test(string geral, string caso){
	int t1 = geral.size();
	int t2 = caso.size();
	int cont = 0;
	for(int i = 0; i < t1; i++){
		if(geral[i] == caso[cont])cont++;
	}
	if(cont == t2){
		return 1;
	}
	else{
		return 0;
	}
}

int main() {
	int n;
	cin>>n;
	string geral;
	string casos;
	
	for(int i = 0; i < n; i++){
		cin>>geral;
		int r = 0;
		cin>>r;
		for(int j = 0; j < r; j++){
			cin>>casos;
			if(test(geral, casos)) cout<<"Yes"<<endl;
			else{
				cout<<"No"<<endl;
			}		
		}		
	}
  	
}