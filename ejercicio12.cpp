// 12. Se desea calcular el valor del cambio de monedas en Dólares y Euros ingresando la cantidad en Pesos.

#include <iostream>

using namespace std;

int main()
{
  const int DOLAR_BLUE_A_PESO = 195;
  const int EURO_BLUE_A_PESO = 224;
  float dolarAPesos, euroAPesos, pesosIngresados;
  cout << "Ingrese la cantidad de pesos que quiere convertir a Euros y a Dolares: ";
  cin >> pesosIngresados;
  dolarAPesos = pesosIngresados / DOLAR_BLUE_A_PESO;
  euroAPesos = pesosIngresados / EURO_BLUE_A_PESO;
  cout << "$" << pesosIngresados << " son " << dolarAPesos << " dolares y " << euroAPesos << " euros";
  return 0;
}
