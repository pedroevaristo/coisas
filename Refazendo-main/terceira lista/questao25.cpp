/* Escreva um algoritmo para calcular
 o fatorial do número N, cujo valor é
obtido através do usuário pelo teclado.*/

#include <iostream>
#include <math.h>
using namespace std;

int main (){

int n;
int t = 1;

cin >> n;

for( ;n >= 1; n--){

 t*=n;

}
cout << t <<endl;





}

