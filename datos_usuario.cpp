#include <iostream>
#include <stdio.h>
#include <conio.h>
/**********************************************************************************

Febrero 13/2023
Natalia Catalina Guzmán Fuentes

- Se requiere hacer una aplicación que capture los datos de usuarios según tipo
de cliente. El resultado será el valor a pagar según la cantidad de canales 
premium a pagar y conexiones de servicios básicos.

1- Inicialmente el usuario deberá digitar el número de cuenta
2- Existen 2 tipos de clientes: r/R (Residencial) y n/N (Negocio)
3- Valor R = 20.7 + 8.8 veces la cantidad_canales_premium
4- Valor N = si la cantidad de conexiones_servicios_basicos es mayor a 10:
	El valor es igual al restante de los 10 (conexiones_servicios_basicos) + 78.9 
	+ 18.7 veces cantidad_canales_premium
	En caso contrario el valor es igual a 78.9 + 18.5 veces la cantidad_canales_premium
5- Al final se pregunta al usuario si quiere ingresar otro cliente o no

***********************************************************************************/
using namespace std;



int main() {
	
	
	//Se decalran variables a ser usadas
	long long numero_cuenta;
	char tipo_cliente;
	int i, j, conexiones_servicios_basicos=0, cantidad_canales_premium=0;
	float valor_R=0, valor_N=0, valor_final;
	
	
	cout<<">> Bienvenido, digite el numero de cuenta del cliente: "<<endl;
	cout<<">> ";
	cin>>numero_cuenta;
	
	cout<<endl<<">> Ingrese el tipo de cliente "<<endl;
	cout<<endl;
	cout<<"   R/r (Residencial)"<<endl;
	cout<<endl;
	cout<<"   N/n (Negocio)"<<endl;
	cout<<">> ";
	cin>>tipo_cliente;
	
	if(tipo_cliente=='r'||tipo_cliente=='R')
	{
		cout<<"Cuantos canales premium tiene: "<<endl;
		cout<<">> ";
		cin>>cantidad_canales_premium;
		cout<<endl;
		
		valor_R=20.7 + 8.8*(cantidad_canales_premium);
		cout<<valor_R;
		
	}
	else{
		cout<<"Digito una opcion incorrecta.";
	}	
	
	
	return 0;
}
