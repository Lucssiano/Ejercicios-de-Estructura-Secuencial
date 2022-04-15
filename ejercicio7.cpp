
// 7. Dado el radio de un círculo, informar el diámetro, el perímetro y la superficie del mismo.

#include <iostream>
#include <math.h>

#define PI 3.1416

using namespace std;

int main()
{
  float radio, perim, sup;
  // const float PI=3.1416;
  cout << "Ingrese el radio del círculo: ";
  cin >> radio;
  perim = 2 * PI * radio;
  sup = PI * pow(radio, 2);
  // sup=PI * (radio * radio);
  cout << "Perimetro " << perim << endl;
  cout << "Superficie " << sup << endl;

  return 0;
}
