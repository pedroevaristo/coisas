/*Elabore um programa que dada a idade de
 um nadador classifique-o em uma
das seguintes categorias: Infantil A = 5 a 7
 anos; Infantil B = 8 a 11 anos; Juvenil
  A = 12 a
13 anos; Juvenil B = 14 a 17 anos;
 Adultos = Maiores de 18 anos. */
 
 #include <iostream>
#include <math.h>
using namespace std;


int main() {
	
	int x;
	
	cout << "Digite sua idade: ";
	cin >> x;
	
	if( x >= 5 and x <= 11){
		
		cout << "Voce e infantil" << x <<endl;
		
	}if( x >= 12 and x <= 17){
		 
		 cout << "Voce e juvenil" <<endl;
		 
	}if( x >= 18 ){
		
		cout << "Voce e adulto"<<endl;
	}

}

