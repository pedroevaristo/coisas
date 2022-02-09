/*Desenvolva um programa que: Leia 4 (quatro)
 números; Calcule o quadrado
de cada um; Se o valor resultante do quadrado
 do terceiro for >= 1000, mostre-o e
finalize; Caso contrário, mostre os valores
 lidos e seus respectivos quadrados. */

 #include <iostream>
 #include <math.h>
 using namespace std;

 int main(){

int x, y, z, c, tx, ty, tz, tc;

cin>>x;
cin>>y;
cin>>z;
cin>>c;

tx = pow(x,2);
ty = pow(y,2);
tz = pow(z,2);
tc = pow(c,2);

if ( tz >= 1000){

cout <<"Seu resultado e\n"<< tz <<endl;

}
 else {
cout <<"Seu resultado e\n"<< tx <<endl;
cout <<"Seu resultado e\n"<< ty <<endl;
cout <<"Seu resultado e\n"<< tz <<endl;
cout <<"Seu resultado e\n"<< tc <<endl;
}
 }