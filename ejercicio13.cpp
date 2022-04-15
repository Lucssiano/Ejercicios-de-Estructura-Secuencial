/* 13. En una empresa automotriz existen 3 áreas: Ensambladora, Pintura y Eléctrica.
El presupuesto anual de la empresa se reparte de la siguiente manera:
      Área          Presupuesto
  Ensambladora          37%
  Pintura               42%
  Eléctrica             21%
Obtener la cantidad de dinero que recibirá cada área para un monto presupuestal que se ingresa */

#include <iostream>

using namespace std;

int main()
{
  const float ENSAMBLADORA = 0.37;
  const float PINTURA = 0.42;
  const float ELECTRICA = 0.21;

  float montoPresupuestal, dineroEnsambladora, dineroPintura, dineroElectrica;

  cout << "Ingrese el monto presupuestal: ";
  cin >> montoPresupuestal;

  dineroEnsambladora = montoPresupuestal * ENSAMBLADORA;
  dineroPintura = montoPresupuestal * PINTURA;
  dineroElectrica = montoPresupuestal * ELECTRICA;

  cout << "El area Ensambladora recibira: $" << dineroEnsambladora << endl
       << "El area Pintura recibira: $" << dineroPintura << endl
       << "El area Electrica recibira: $" << dineroElectrica;

  return 0;
}