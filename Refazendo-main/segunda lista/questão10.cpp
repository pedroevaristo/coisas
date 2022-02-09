/*Elabore um programa que leia as 3 nota de um aluno da UnP e retorne a
média final e a situação do alunos (aprovado, reprovado ou em recuperação)*/

#include <iostream>
#include <math.h>
using namespace std;


int main(){

int x, y, z, t;

cout <<"Digite suas notas"<< endl;
cin >> x;
cin >> y;
cin >> z;

t =((x+y+z)/3) ;

    if(t > 6){

 cout << "Esta aprovado! " <<endl;

    }
    if(t <= 6 and t >= 5){

cout <<"Esta de recuperacao"<<endl;

    }
    if( t <= 5 ){

cout <<"Esta reprovado"<<endl;

    }

}