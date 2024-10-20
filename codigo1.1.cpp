#include "iostream"
using namespace std;
int main()
{
	float PRECIOPRODUCTO, DEVOLUCION; 
	float PAGO;
cout<<" Escribe el costo del articulo "<<"\n";
cin >> PRECIOPRODUCTO;
cout<<"Escribe cuanto fue el pago del articulo "<<"\n"; cin>>PAGO;
//CALCULO DE DEVOLUCION
DEVOLUCION=PAGO-PRECIOPRODUCTO;
//SE IMPRIME RESULTADOS
cout<<" El cambio del cliente es "<<DEVOLUCION; return 0;

}

