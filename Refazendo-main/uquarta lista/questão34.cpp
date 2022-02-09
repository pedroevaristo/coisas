/*Escreva um algoritmo que receba dez números do usuário e armazene em
um vetor a metade de cada número. Após isso, o algoritmo deve imprimir todos os valores
armazenados. */


#include <iostream>
using namespace std;

int main(){

float vet[10];
int i = 0;


while(i <= 9){//i = variação dos numeros dentro do vetor
    cout<<"digite ai: \n";

    cin >> vet[i] ;
    cout << "\n";

    i++;
}
i = 0;//renicializar o while/ operação para outra
while(i <= 9){

    vet[i]/=2;
    
    cout <<"\n"<< vet[i] <<endl;
    
    i++;

   
}









}