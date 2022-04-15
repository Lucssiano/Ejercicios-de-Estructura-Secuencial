// 4. Elabore un programa que calcule la edad de una persona.

#include <iostream>

using namespace std;

int main()
{
  int añoDeNacimiento, mesDeNacimiento, diaDeNacimiento, añoActual, mesActual, diaActual, sumaDeLosDatosDeNacimiento, sumaDeLosDatosActuales, restaDeDatos, edadDeUsuario;
  cout << "Ingrese el año en que nacio en formato yyyy: ";
  cin >> añoDeNacimiento;
  cout << "Ingrese el mes en que nacio en formato mm: ";
  cin >> mesDeNacimiento;
  cout << "Ingrese el dia en que nacio en formato dd: ";
  cin >> diaDeNacimiento;
  sumaDeLosDatosDeNacimiento = (añoDeNacimiento * 10000) + (mesDeNacimiento * 100) + diaDeNacimiento;
  cout << "Ingrese el año actual en formato yyyy: ";
  cin >> añoActual;
  cout << "Ingrese el mes actual en formato mm: ";
  cin >> mesActual;
  cout << "Ingrese el dia de hoy en formato dd: ";
  cin >> diaActual;
  sumaDeLosDatosActuales = (añoActual * 10000) + (mesActual * 100) + diaActual;
  restaDeDatos = sumaDeLosDatosActuales - sumaDeLosDatosDeNacimiento;
  edadDeUsuario = restaDeDatos / 10000;
  cout << "La edad del usuario es: " << edadDeUsuario;
  return 0;
}

