/*Escreva um algoritmo que receba a altura de 10 atletas. Esse algoritmo deve
imprimir a altura daqueles atletas que tem altura maior que a média. */

#include <iostream>
#include <math.h>
using namespace std;

int main(){

float vet[10], m = 0;
int x;//media; resultado

cout<<"Digita altura dos 10 atletas: \n";

for(x = 0; x <= 9; x++){

cin>> vet[x];

m+= vet[x];

}

m/= 10;

cout <<"A media:" << m << "\n"<<endl;
    for(x = 0; x <= 9; x++){
        
        if( vet[x] > m ){

        cout <<"\n" << vet[x] <<endl;

        }
    }

}