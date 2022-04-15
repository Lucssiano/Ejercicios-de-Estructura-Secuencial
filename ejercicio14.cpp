/* 14. Un empresario constructor sabe que necesita 0,5 metros cúbicos de arena por metro cuadrado de revoque a realizar.
Hacer un programa donde ingrese las medidas de una pared (largo y alto) expresada en metros y obtenga la cantidad de arena
necesaria para revocarla. */

#include <iostream>

using namespace std;

int main()
{
  const float ARENA_NECESARIA = 0.5; // 0,5 metros cúbicos de arena por metro cuadrado de revoque a realizar

  float largoPared, altoPared, metrosCuadradosPared, cantidadDeArenaNecesaria;

  cout << "Ingrese la medida del largo de la pared en metros: ";
  cin >> largoPared;

  cout << "Ingrese la medida del alto de la pared en metros: ";
  cin >> altoPared;

  metrosCuadradosPared = largoPared * altoPared;
  cantidadDeArenaNecesaria = ARENA_NECESARIA * metrosCuadradosPared;

  cout << "Se necesitan " << cantidadDeArenaNecesaria << " metros cubicos de arena para revocar la pared";

  return 0;
}