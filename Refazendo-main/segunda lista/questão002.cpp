/*Elabore um algoritmo que leia dois valores
 numéricos inteiros e faça sua
adição. Caso o resultado obtido
 seja maior que 10 ou igual, esse valor
  deve ser
apresentado, somando-se a ele 5.
 Caso o resultado não seja maior que 10 
 ou igual, ele
deve ser apresentado subtraindo-se 7.*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
int x, y, z;

cout<<"Digite os numeros: \n";

cin >> x;
cin >> y;

z = x+y;

if( z >=10){

z+=5;

cout <<"Seu resultado e alto:\n"<< z <<endl;

}if( z <= 10){

    z-=7;

cout <<"Seu resultado e baixo:\n"<< z <<endl;

}

}

