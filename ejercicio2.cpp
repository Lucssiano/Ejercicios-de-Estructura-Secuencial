/*  2. Leer dos números y encontrar:
a. La suma del doble del primero mas el cuadrado del segundo.
b. El promedio de sus cubos. */


#include <iostream>

using namespace std;

int main()
{
   int num1,num2,suma,promedio;
   cout << "Ingrese un numero ";
   cin>>num1;
   cout << "Ingrese otro numero ";
   cin>>num2;
   suma = 2*num1 + num2*num2;
   promedio = (num1*num1*num1 + num2*num2*num2)/2;
   cout << "La suma del doble del primero mas el cuadrado del segundo " << suma << endl;
   cout << "El promedio de sus cubos es " << promedio << endl;

   return 0;
}