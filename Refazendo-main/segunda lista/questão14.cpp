/*Escreva um algoritmo que lê três valores para os lados de um triângulo. O
algoritmo deve verificar se o triângulo é equilátero (todos lados iguais), isósceles (dois
lados iguais) ou scaleno(todos lados diferentes). */


#include <iostream>
#include <math.h>
using namespace std;

int main(){
int x, y, z;//x e y são lados, z base;

cout<<"As medidas do quadrado, digita abaixo: \n";
cin>>x;
cin>>y;
cin>>z;

if(x == y and y == z){//equilátero (todos lados iguais)
cout<<"equilátero (todos lados iguais)"<<endl;

}
if(x == y and x != z ){//isósceles (dois lados iguais)
cout<<"isosceles (dois lados iguais)"<<endl;

}
if(z != x and y != x ){//scaleno(todos lados diferentes)
cout<<"scaleno(todos lados diferentes)"<<endl;

}




}