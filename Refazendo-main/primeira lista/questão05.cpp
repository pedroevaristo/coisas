/*Escreva um algoritmo que pergunte o nome e sobrenome
(separadamente), e data de nascimento (dia, mês e ano,
 separadamente)
 e
informe ao usuário o seu sobrenome e nome na mesma linha 
(nessa ordem),
sua idade e sua data de nascimento no modelo xx/xx/xxxx.*/

#include <iostream>
#include<math.h>
using namespace std;

int main(){
string nome, nome1, sobre, sobre1;
int x, y, z;//dia, mes, ano

cout <<"Digite seu nome e sobrenome abaixo: \n";
cin >> nome;
cin >> nome1;
cin >> sobre;
cin >> sobre1;
//==========
cout <<"Digite seu ano de nascimento \n";
cin>>x;
cin>>y;
cin>>z;


cout <<"Ola "<< nome <<nome1 << sobre <<sobre1 <<endl;
cout << x <<"."<< y <<"."<<z<<endl;


}