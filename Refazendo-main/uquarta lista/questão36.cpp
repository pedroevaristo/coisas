/* Escreva um algoritmo que receba quinze números do usuário e armazene em
um vetor a raiz quadrada de cada número. Caso o valor digitado seja menor que zero o
número –1 deve ser atribuído ao elemento do vetor. Após isso, o algoritmo deve imprimir
todos os valores armazenados.*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){

float vet[15], y;
int x;// x = para limitar quantas vezes para o loop, e y = resultado



    cout <<"Digite 15 numeros \n";
    

   for(x = 0; x <= 14; x++){
   
   cin>> vet[x];

    y = sqrt(vet[x]);
        
        if(vet[x] < 0){

            vet[x] - 1;

        }
  
    cout << y <<"\n"<<endl;

    }



}
/*for(x = 0; x <= 15; x++){
  

    y = sqrt(vet[i]);
  
    cout << y <<"\n"<<endl;

    } */