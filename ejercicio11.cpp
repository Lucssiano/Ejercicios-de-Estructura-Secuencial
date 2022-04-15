/* 11. En una empresa vendedora de alambres se quiere calcular el precio de un pedido. Para ello
se ingresa los metros pedidos. El precio del alambre es de 10,50 Pesos por metro. */

#include <iostream>

using namespace std;

int main()
{
  float metrosPedidos, precioDelPedido;
  const float PRECIO_ALAMBRE = 10.50;

  cout << "Ingrese los metros de alambre que requiere: ";
  cin >> metrosPedidos;

  precioDelPedido = metrosPedidos * PRECIO_ALAMBRE;
  cout << "El precio del pedido es de: "
       << "$" << precioDelPedido;

  return 0;
}
