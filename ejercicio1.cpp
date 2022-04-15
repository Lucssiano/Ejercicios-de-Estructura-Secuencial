// 1. Dados 3 números enteros positivos, muestre la suma, la resta y la multiplicación de todos.

#include <iostream>

using namespace std;

int main()
{
   int num1,num2,num3,suma,resta,multiplicacion;
   cout << "Ingrese un numero ";
   cin>>num1;
   cout << "Ingrese otro numero ";
   cin>>num2;
   cout << "Ingrese otro numero ";
   cin>>num3;
   suma = num1 + num2;
   resta = num1 - num2 - num3;
   multiplicacion = num1 * num2 * num3;
   cout << "La suma es " << suma << endl;
   cout << "La resta es " << resta << endl;
   cout << "La multiplicacion es " << multiplicacion << endl;

   return 0;
}