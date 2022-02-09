/*Escreva um algoritmo que determine
 os 3 últimos divisores de um dado
número N informado pelo usuário */
#include <iostream>
#include <math.h>
using namespace std;


int main(){
   int n, t, y = 0;

  cin >> n;

  for(t = n; t >= 1; t--){

  if(n % t == 0 ){
   
   y++;
   cout << t <<endl;
   
   if(y == 3){
     return 0;

   }
  }

}

}