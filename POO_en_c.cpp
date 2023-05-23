#include <iostream>
#include <cmath>
/****************************************************************************

Natalia Catalina Guzm�n Fuentes
Marzo 27/2023
Porgramaci�n orientada aobjetos

Clases:
a) C�lculo de Pit�goras
b) Fecha
c) �C -> �F
d) C�lculo de ra�z n-�sima
e) C�lculo de potencia n-�sima

*****************************************************************************/
using namespace std;

//Constructor tiene el nombre de la clase
class Pitagoras{
    
    private: 
    	float hipotenusa=0;
    	float cateto1;
    	float cateto2;
     //Creaci�n del constructor
     Pitagoras (); //Constructor por defecto (sin parametros)
     Pitagoras(float, float); //
    public:
    //M�todos = funciones de la clase 
   
     void CalcularHipotenusa(){
     	
     	cout<<">> Para calcular el valor de la hipotenusa de un tri�ngulo rect�ngulo debe ingresar los siguientes datos: "<<endl;
     	cout<<">> Digite el valor del primer cateto"<<endl;
     	cout<<">> ";
    	cin>>cateto1;
    	cout<<">> Digite el valor del segundo cateto"<<endl;
     	cout<<">> ";
    	cin>>cateto2;
        hipotenusa= sqrt((cateto1*cateto1)+(cateto2*cateto2));
        cout<<">> Hipotenusa: ";
        cout<<hipotenusa<<endl;
    }
};
class Temperatura{
	private:
		float celsius, far;
		
	public:
		void convertirTemperatura(){
			cout<<">> Ingrese la temperatura en grados Celsius �C "<<endl;
			cout<<">> ";
			cin>>celsius;
			far=((9*celsius)/5)+32;
			cout<<celsius<<"C -> "<<far<<"F"<<endl;
		}
		
};

class Raiz{
	private: 
	float numero, valor;
	
	public:
		void calcularRaiz(){
			cout<<"Ingrese un numero: ";
			cout<<">> ";
			cin>>numero;
			cout<<"Ingrese un valor para calcular la raiz de "<<numero;
			cout<<">> ";
			cin>>valor;
			
		}
};



int main() {
	
	//Instanciar la calse en el objeto calculo
	Pitagoras calculo;
	Temperatura convertir;
	
	calculo.CalcularHipotenusa();
	convertir.convertirTemperatura();
	
	return 0;
}
