/*Elabore um programa que calcule e
apresente a média geral de uma turma de oito
alunos, a partir da média individual de cada um
dos alunos. A média a ser obtida deve ser a média
geral de cada aluno durante o ano letivo */

#include <iostream>
#include <math.h>
using namespace std;

int main(){

float al[8], sum = 0, media;//al = alunos. Vet[i] => i
int i;//auxiliar


for(i = 0; i < 8; i++){

cout <<"Digita a nota do aluno";
cin >> al[i];

sum+= al[i];
}

media= sum/8;

cout <<"A media e : \n" << media<< endl;

}