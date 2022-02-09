/*Fazer um algoritmo para ler o ano de nascimento de uma pessoa, calcular e
mostrar sua idade e, também, verificar e mostrar se ela já tem idade para votar (16 anos
ou mais)e para conseguir a Carteira de Habilitação (18 anos ou mais). */

#include <iostream>
#include <math.h>
using namespace std;

int main(){
int i, x, z, y, t, tx;//i = ano; x = mes; z =ano atual; y= mes atual; t & tx e o total de cada;

cout<<" Digite seu ano de nascimento(ano e mes): \n";

cin>> i;
cin>> x;

cout <<"Ano e mes atual: \n";

cin >> z;
cin >> y;


t = (z-i);
tx = (y-x);

 if(t >= 18){

   cout <<"pode dirigir e votar"<<endl;


}if(t <= 16){
  
  cout <<"Só pode votar"<<endl;

 }

cout <<"Sua idade \n"<< t << tx <<endl;
}