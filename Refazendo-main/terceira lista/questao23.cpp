/*Escreva um algoritmo que realize a potência de A 
(número real) por a^B
(número inteiro e positivo), ou seja, 􀮻, 
através de multiplicações
 sucessivas. Esses dois
valores são passados 
pelo usuário através do teclado. */

#include <iostream>
#include <math.h>
using namespace std;

int main (){
int a, b, t = 1;//a = base, b = expoente

cin >> a;
cin >> b; 


do {//aqui é onde vai ser verificado 


t*=a;
//a*=a; se for para colcoar dessa for vai pulando o resultado da 
//a multiplicação em 2 em 2;
b--;

cout << a <<endl;
/*a=>deve ser multiplicado pela quantidade do numero de b*/
}
while(b >= 1);// aqui será testado

//O valor implementado em a dever 
//igual ao resultado da multiplicação;   



}