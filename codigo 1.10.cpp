#include "iostream"
#include <stdio.h>
using namespace std;
int main()
{
float Altura, Base;
float SUPERFICIE, PERIMETRO;
//Se declaran los n�meros que se sumar�n (pueden ser decimales)
//Se pide el primer numero
cout << "Por favor ingrese el valor de la Base: "<< "\n";
//Se asigna el primer valor a Base
cin >> Base;
//Se pide el segundo numero
cout << "Por favor ingrese el valor de la Altura: "<< "\n";
//Se asigna el segundo valor a Altura
cin >> Altura;

SUPERFICIE=Base*Altura;
PERIMETRO=2*(Base+Altura);

//Se muestra el resultado.
printf ("\n La Superficie del rectantgulo es %5.2f \n", SUPERFICIE); printf ("\n El perimetro del rectangulo es es %5.2f \n", PERIMETRO);

return 0;
}