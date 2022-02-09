/* Faça um programa que carregue um vetor (valores digitados por um usuário)
de seis elementos numéricos inteiros, calcule e mostre: Quais os números pares, quais os
números impares, e a quantidade de pares e impares*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){

int vet[6];
int x;


cout<<"Digita aqui 6 numeros \n";

for(x = 0; x <= 5; x++){

cin>> vet[x];

}
x = 0;

    while(x <= 5){
        if(vet[x] % 2 == 0){//trocar por atribuição o vet

        cout<<"Numeros par: \n"<< vet[x] <<endl;

        }
        if(vet[x] % 2 == 1){

        cout <<"numero impar \n" << vet[x] <<endl;

        }
    x++;
    }
    vet[x]+= 1;//isola o calculo, só essa duvida
    cout << vet[x] <<endl;
}