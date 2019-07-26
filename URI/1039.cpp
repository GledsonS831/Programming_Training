#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main(){
    double r1, x1, y1, r2, x2, y2;
    while(cin>>r1>>x1>>y1>>r2>>x2>>y2){
      double d = sqrt(pow((x1-x2), 2)+pow((y1-y2), 2));
      if(r1 < r2){
        cout<<"MORTO"<<endl;
      }
      else{
        if(d < r1-r2){
          cout<<"RICO"<<endl;
        }
        else if(d == r1-r2) cout<<"RICO"<<endl;
        else{
          cout<<"MORTO"<<endl;
        }
      }
      
    }
return 0;
}
