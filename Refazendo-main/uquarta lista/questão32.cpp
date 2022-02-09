/*Escreva um algoritmo que armazene em um vetor todos os números inteiros
de 10 a 1 (em ordem decrescente). Após isso, o algoritmo deve imprimir todos os valores
armazenados. */

#include <iostream>
using namespace std;

int main(){
    

int vet[10];
int i;//x = auxiliar

for(i = 9; i >= 0; i--){// o 9 esta associado ao numero 10 e 0 é 1;

vet[i] = i + 1;

cout <<"Ordem decrescente: \n"<< vet[i] <<endl;

}



}