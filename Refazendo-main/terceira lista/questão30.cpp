/*Seja a seguinte série: 1, 4, 9, 16, 25,
 36, 
... Escreva um algoritmo em 
que gere
esta série até o N-ésimo termo. Este N-ésimo
 termo
 é digitado pelo usuário. */

 #include <iostream>
 #include <math.h>
 using namespace std;

int main(){
int n, x;

cin >> n;

for( ; n >= 1; n--){

  x = pow(n,2);
cout << x <<endl;
}


}