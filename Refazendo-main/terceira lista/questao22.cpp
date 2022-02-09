/*Criar um algoritmo que leia dez números inteiros
 e imprima o maior número
e os números primos da lista.*/

#include <iostream>
#include <math.h>
using namespace std;



int main(){
  int num[10], nm = 0, i = 0;//nm é numero maior

cout <<"Digita seus numeros";
cin >> num[0];
cin >> num[1];
cin >> num[2];
cin >> num[3];
cin >> num[4];
cin >> num[5];
cin >> num[6];
cin >> num[7];
cin >> num[8];
cin >> num[9];

do{
  
  if(num[i] >= nm){

   nm = num[i];

  }
i++;

} while(i < 10);{


cout << nm <<endl;

}



}