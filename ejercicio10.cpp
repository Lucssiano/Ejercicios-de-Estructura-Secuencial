// 10.Dado la longitud de los dos catetos de un triángulo rectángulo , mostrar la longitud de la hipotenusa.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  float cateto1, cateto2, hipotenusa;

  cout << "Ingrese la longitud de un cateto: ";
  cin >> cateto1;
  cout << "Ingrese la longitud del otro cateto: ";
  cin >> cateto2;

  hipotenusa = (float)sqrt(pow(cateto1, 2) + pow(cateto2, 2));
  cout << "La hipotenusa del triangulo rectangulo es: " << hipotenusa;
  return 0;
}
