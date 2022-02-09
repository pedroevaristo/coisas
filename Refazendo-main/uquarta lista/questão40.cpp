/*Faça um programa que carregue um vetor (valores digitados por um usuário)
com sete números inteiros, calcule e mostre: Os múltiplos apenas de 2, apenas de 3 e de 2
e 3 ao mesmo tempo */

#include <iostream>
#include <math.h>
using namespace std;

int main(){

int v[7];// vetor
int x;

cout<<" digita 7 numeros inteiros \n";


for(x = 0; x <= 6; x++){

cin >> v[x];

}

//como faço para iniciar aqui?

    for(x = 0; x <= 7; x++ ){

        if(v[x] % 3 == 0){

        cout<<"\n"<< v[x] <<endl;
        
        }
        
        if(v[x] % 2 == 0){

            cout<< "\n" << v[x] <<endl;

        }


        /*if(v[x] % 3 == 0 and v[x] % 2 == 0){// duvida= é possivel pegar um valor do  resto dos if's de cima 
                                                //e colocar para mostra?

        cout<< "\n" << v[x] << endl;// Volta aqui para refazer!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

        }Eu acho que é só para mostra quantos multiplos tem de 3 e 2*/

   
    
    }


}