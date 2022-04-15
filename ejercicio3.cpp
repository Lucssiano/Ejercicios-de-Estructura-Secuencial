// 3. Determinar la suma de las cifras de un número entero positivo de 4 cifras. Ejemplo: Dado 8125, la suma es 16.

#include <iostream>

using namespace std;

int main()
{
  int num1, sumaDeCifras, primerCifra, segundaCifra, tercerCifra, cuartaCifra;
  cout << "Ingrese un numero entero positivo de 4 cifras ";
  cin >> num1;
  primerCifra = num1 / 1000;
  cout << "primerCifra " << primerCifra << endl;
  segundaCifra = (num1 - (primerCifra * 1000)) / 100;
  cout << "segundaCifra " << segundaCifra << endl;
  tercerCifra = (num1 - (primerCifra * 1000) - (segundaCifra * 100)) / 10;
  cout << "tercerCifra " << tercerCifra << endl;
  cuartaCifra = (num1 - (primerCifra * 1000) - (segundaCifra * 100)) - tercerCifra * 10;
  cout << "cuartaCifra " << cuartaCifra << endl;
  sumaDeCifras = primerCifra + segundaCifra + tercerCifra + cuartaCifra;
  cout << "La suma de las cuatro cifras es: " << sumaDeCifras << endl;
  return 0;
}
