/* Criar um algoritmo que leia os elementos de uma matriz inteira 3 x 3 e
escreva os elementos da diagonal principal.*/

#include <iostream>
using namespace std;

int main(){

int matriz[3][3];// linha & coluna
int x, y;// 0-> 2 = 3 numeros

for(x = 0; x <= 3;x++ ){

    for(y=0; y <=3 ; y++){

        if(x = y){

            matriz[x][y] = 1;

        }else{

            matriz[x][y] = 0;

        }

    }

}
    for ( x = 0; x< 3; x++)
    {
        for(y = 0; y < 3 ; y++){

            cout<<"\n"<< matriz[x][y]<<endl;
        }
        
        cout<<"\n"<<endl;
    }


}
