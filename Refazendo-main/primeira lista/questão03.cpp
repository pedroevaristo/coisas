/* Escreva um algoritmo que pergunte ao usuário 3 valores 
e retorne
na tela a média dos 3 valores.*/


#include <iostream>
#include <math.h>

using namespace std;

int main(){
int x, y, z,t;


cout <<"Digite seus numeros, abaixo: \n";
cin>>x;
cin>>y;
cin>>z;

t = ((x+y+z)/3);

cout << t;

}