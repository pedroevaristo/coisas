/*Elaborar um algoritmo que efetue a leitura de um número inteiro e
apresentar uma mensagem informando se o número é par ou ímpar */

#include <iostream>
#include <math.h>
using namespace std;

int main(){

int x;
cin >> x;

if(x%2==0){
cout <<"Esse numero e par "<< endl;

}if(x%2==1){
cout<<"Esse numero e impar"<<endl;

}

}