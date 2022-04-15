// 8. Calcular el área y el perímetro de un rectángulo, dado la base y la altura.

#include <iostream>

using namespace std;

int main()
{
  float base, altura, area, perimetro;
  cout << "Ingrese el valor de la base del rectángulo: ";
  cin >> base;
  cout << "Ingrese el valor de la altura del rectángulo: ";
  cin >> altura;
  area = base * altura;
  perimetro = base * 2 + altura * 2;
  cout << "El area del rectangulo es: " << area << endl
       << "El perimetro del rectangulo es: " << perimetro;
  return 0;
}