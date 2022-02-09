/*Elabore um algoritmo que leia dois 
valores numéricos inteiros, some-os e
apresente o resultado, caso o valor somado
 seja maior que 10*/

#include <iostream>
#include <math.h>
using namespace std;

 int main(){
int x, y, t;

cout << "Digite seus numeros: \n";

cin >> x;
cin >> y;

t = x+y;

if(t >= 10){

cout << t << endl;

}else{
    cout <<"Seu resultado e inferior a 10"<<endl;
}

 }