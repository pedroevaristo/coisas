/*Escreva um algoritmo que armazene em um vetor os 10 primeiros números
ímpares. Após isso, o algoritmo deve imprimir todos os valores armazenados */


#include <iostream>
using namespace std;

int main(){

int vet[10];
int i, x = 0;//auxiliar = x


for(i = 0; i <= 9;){

    if(x % 2 == 1){

        vet[i] = x;

        cout <<"\n"<< vet[i] <<endl;

        i++;// aqui vai ser analisado e aumenta mais 1, ele sabe que tem um limite de numero impar;
    }
    x++;//só para quando o for parar limite até 10;
 }
}






