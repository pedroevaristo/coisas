/*Desenvolva um algoritmo 
que apresente a soma dos números pares entre 1 e
um número informado pelo usuário*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
int x, y;

cin >> x;

for( y = 1; x >= 1; x--){

if(x%2==0){
   
   y++;
  cout<< x <<endl;

}
 
}

}

