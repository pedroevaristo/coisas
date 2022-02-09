/*Elabore um programa que receba cinco valores inteiros em um vetor e
apresente o somatório dos elementos ímpares fornecidos */

#include <iostream>
#include <math.h>
using namespace std;

int main(){

int vet[5], x, a;//auxiliar
float y = 1;//y = resultado


cout<<"digita 5 numeros \n";


for(x = 0; x <= 4 ; x++){

        cin>> vet[x];

}        
x = 0;
    while(x <= 4 ){
        
            if(vet[x] % 2 == 1){//caso resulte em numero impar

        
        cout << "\n"<<vet[x] <<endl;
        
        }

        x++;
   
   
   y+= vet[x];

        cout <<"\n" << y <<endl;  // ajeitar algumas coisas!!!!!
   
}

   
}