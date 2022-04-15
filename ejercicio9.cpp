/* 9. Determinar el porcentaje de alumnos aprobados, desaprobados y ausentes que hubo en un
examen, conociendo las cantidades de cada uno. */

#include <iostream>

using namespace std;

int main()
{
  int totalDeAlumnos, alumnosAprobados, alumnosDesaprobados, alumnosAusentes;
  float porcentajeDeAlumnosAprobados, porcentajeDeAlumnosDesaprobados, porcentajeDeAlumnosAusentes;
  cout << "Ingrese la cantidad de alumnos aprobados: ";
  cin >> alumnosAprobados;
  cout << "Ingrese la cantidad de alumnos desaprobados: ";
  cin >> alumnosDesaprobados;
  cout << "Ingrese la cantidad de alumnos ausentes: ";
  cin >> alumnosAusentes;
  totalDeAlumnos = alumnosAprobados + alumnosDesaprobados + alumnosAusentes;
  porcentajeDeAlumnosAprobados = (float)(alumnosAprobados * 100) / totalDeAlumnos;
  porcentajeDeAlumnosDesaprobados = (float)(alumnosDesaprobados * 100) / totalDeAlumnos;
  porcentajeDeAlumnosAusentes = (float)(alumnosAusentes * 100) / totalDeAlumnos;
  cout << "El porcentaje de alumnos aprobados es: " << porcentajeDeAlumnosAprobados << "%" << endl
       << "El porcentaje de alumnos desaprobados es: " << porcentajeDeAlumnosDesaprobados << "%" << endl
       << "El porcentaje de alumnos ausentes es: " << porcentajeDeAlumnosAusentes << "%" << endl;
  return 0;
}
