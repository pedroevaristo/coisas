/*Escreva um algoritmo que receba dez números do usuário e armazene em
um vetor o quadrado de cada número. Após isso, o algoritmo deve imprimir todos os
valores armazenados. */

#include <iostream>
#include <math.h>
using namespace std;

int main(){
float vet[10];
int i = 0, x, y;//i = vet[i] associando. y = resultado

cout<<"Digita 10 numeros: \n";
   
  for(x = 0; x <= 9 ; x++){
        
        cin>> vet[i];
        
        y = pow(vet[i], 2);
        
        cout << y << "\n"<<endl;
  }
}