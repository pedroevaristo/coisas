/* Faça um programa que lê 4 valores X, A, B e C onde X é um número inteiro e
positivo e A, B, e C são quaisquer valores reais. O programa deve escrever os valores lidos
e:
• se X = 1, escrever os três valores A, B e C em ordem crescente;
• se X = 2, escrever os três valores A, B e C em ordem decrescente;
• se X = 3, escrever os três valores A, B, e C de forma que o maior valor fique entre os
outros dois;
• se X não for um dos três valores acima, dar uma mensagem indicando isso.*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x;//x = inteiro e +; a, b,c = valor real
float a, b, c, t, y;//t=auxiliar, y = auxiliar 2


cout<<"Digite tres numeros, abaixo: \n";
cin>>a;
cin>>b;
cin>>c;

cout<<"pressiona 1, 2 ou 3";
cin>> x; 


switch(x){
   
   case 1: for(t = 1; a <= t; t++){
   

   y++;

   if(t == 3){
cout << t << endl;}

   };break;/*


   case 2: if(){};break;/* NÃO DEU CERTO!!!!!!!!!!!!
   case 3: if(){};break;
   */
}  








}