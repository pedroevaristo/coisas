/*Escreva um algoritmo que pergunte ao usuário o raio 
e a altura de
um cilindro, retornando a área da figura e o volume do sólido
 para o usuário*/

 #include <iostream>
 #include <math.h>
 using namespace std;

 int main(){
float x, y, z, v;//v=volume, z = pi, y = altura, x = raio  
z = 3.14;

cout <<"Digita o raio e altura do cilindro \n";

cin>> x;
cin>> y;

v =(z*((x*x)*y));

cout <<"Seu resultado e: \n"<< v <<endl;
 }