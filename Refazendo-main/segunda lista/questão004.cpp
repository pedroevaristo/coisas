/*valor do código for 1, 2 ou 3
o algoritmo deve informar para o usuário
por extenso o código digitado, se não
for, o algoritmo deve informar “código
invalido”.*/

#include <iostream>
#include <math.h>
using namespace std;

int main(){
int x;



cout<<"Escolha uma: 1, 2, 3 =\n"<<endl;
cin>> x;



  if(x == 1){
    
    cout<<"Seu valor de codigo e 1"<<endl;

}
        if(x == 2){
    
    cout<<"Seu valor de codigo e 2"<<endl;

}
       if(x == 3){

    cout<<"Seu valor de codigo e 3"<<endl;

}
         else{

  cout <<"Codigo invalido" <<endl;
}

}