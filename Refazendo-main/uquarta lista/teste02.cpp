/*Escreva um algoritmo que receba as 2 notas de 3 alunos da UnP, imprima
as notas e a pontuação final dos 3 alunos (considere média aritmética).*/

#include <iostream>

using namespace std;

int main(){

int matriz[2][3];
int x, i, y, m1, m2, m3;// resultado, x = linha, i = coluna

for(x = 0; x < 2; x++){

    for( i = 0; i < 3; i++){

        cout<<"Digita ai"<<endl;
        cin>> matriz[x][i];

    }

}

m1 = ((matriz[0][0] + matriz[1][0])/2);
m2 = ((matriz[0][1] + matriz [1][1])/2);
m3 = ((matriz[0][2] + matriz[1][2])/2);


cout<< m1 <<"\n"<< m2 <<"\n"<< m3 <<endl;

}

