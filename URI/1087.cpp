#include <iostream>
#include <math.h>
using namespace std;

int chegar_pos(int x1,int y1, int x2, int y2, int m[][9]){
  for(int i = y1; i < 9; i++){
    if(m[x1][i] == 2){
  
       return 1;
    }
  }
  for(int i = y1; i >= 1; i--){
    if(m[x1][i] == 2){

       return 1;
    }
  }
  for(int i = x1; i < 9; i++){
    if(m[i][y1] == 2){
    
       return 1;
    }
  }
  for(int i = x1; i >= 1; i--){
    if(m[i][y1] == 2){

       return 1;
    }
  }
  for(int i = x1, j = y1; i >= 1 && j >= 1; i--, j--){
    if(m[i][j] == 2){
      
       return 1;
    }
  }
  for(int i = x1, j = y1; i < 9 && j < 9; i++, j++){
    if(m[i][j] == 2){
 
       return 1;
    }
  }
  for(int i = x1, j= y1; i < 9 && j >= 1; i++, j--){
      if(m[i][j] == 2){
   
       return 1;
    }
  }
  for(int i = x1, j= y1; i >= 1  && j < 9; i--, j++){
      if(m[i][j] == 2){
   
       return 1;
    }
  }
  return 2;
}

int main() {
  int x1= 1, y1 = 1, x2 = 1, y2 = 1;
  while(1){
    cin>>x1>>y1>>x2>>y2;
    if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0) break;
    int tab[9][9] = {};
    tab[x1][y1] = 1;
    tab[x2][y2] = 2;
    if(x1 == x2 && y1 == y2){
      cout<<0<<endl;
    }
    else{
      int resp = chegar_pos(x1, y1, x2, y2, tab);
      cout<<resp<<endl;
    }
  }
}