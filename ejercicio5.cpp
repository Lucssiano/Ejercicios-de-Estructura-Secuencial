/* 5. Obtener la edad de una persona en meses, si se ingresa su edad en años y meses.
Ejemplo: Ingresado 3 años 4 meses debe mostrar 40 meses. */

#include <iostream>

using namespace std;

int main()
{
  int edadEnAños, mesesDesdeQueCumplio, edadEnAñosAMeses, edadEnMesesFinal;
  cout << "Ingrese su edad en años: ";
  cin >> edadEnAños;
  cout << "Ingrese los meses que pasaron desde que cumplio dicha edad: ";
  cin >> mesesDesdeQueCumplio;
  edadEnAñosAMeses = edadEnAños * 12;
  edadEnMesesFinal = edadEnAñosAMeses + mesesDesdeQueCumplio;
  cout << "La edad del usuario en meses es: " << edadEnMesesFinal;
  return 0;
}