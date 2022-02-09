/*Faça um algoritmo que leia uma variável composta(= vetor) de 5 valores numéricos e
ordene essa variável em ordem crescente. O programa também deve ler um número k e
imprimir o k-ésimo termo da variável composta. */


#include <iostream>
#include <math.h>
using namespace std;

int main(){

int vet[5];
int x, k;

cout <<"Digita 5 numeros";

for(x = 0; x <= 4 ; x++){

cin>> vet[x];

}

for(x = 4; x >= 0 ; x--){




cout<<"\n"<< vet[x] <<endl;

}



}

