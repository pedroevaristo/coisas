/* Construa um algoritmo que recebe um número inteiro e verifica se esse é
menor do que 100. Se o número for menor que 100, some mais 100 a ele e então faça a
impressão do resultado. Se não, subtraia 100 e então imprima o resultado.*/


#include <iostream>
#include <math.h>
using namespace std;

int main(){
int x;

cout<<"Digita seu numero:\n";
cin>>x;


if(x <= 100){

x+=100;
cout <<"Sua soma com 100: \n"<< x <<endl;

}else{

    x-=100;
    cout <<" Sua subtracao com 100: \n"<< x <<endl;


}


}