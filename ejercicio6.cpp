// 6. Dadas las notas de cuatro exámenes, mostrar la nota promedio.

#include <iostream>

using namespace std;

int main()
{
  int nota1, nota2, nota3, nota4, suma;
  float prom;
  cout << "Ingrese cuatro notas:" << endl;
  cin >> nota1 >> nota2 >> nota3 >> nota4;
  prom = (float)(nota1 + nota2 + nota3 + nota4) / 4;
  // suma=nota1+nota2+nota3+nota4;
  // prom=(float)suma/4; 
  cout << prom;
  return 0;
}