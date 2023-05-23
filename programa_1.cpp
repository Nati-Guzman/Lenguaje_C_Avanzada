#include <iostream>

/********************************************************************************************
Enero 30/2023 
Febrero 1/2023
Natalia Catalina Guzmán Fuentes

Problema: 
Se tiene un gym que requiere un sistema informático para capturar lo datos de sus clientes
-Se crea un struct para hacer el tipo de dato que capture los datos
-Se presenta que por cada dato, se imprime la pregunta y se captura 

********************************************************************************************/


using namespace std;

//se crea un TDA para la captura de los datos de cada usuario
struct cliente{
 string nombre, direccion, correo;
 int edad;
 long long cedula;
 long long celular;
 char genero;
 float masa; 
 
 struct hijos{
	int cantidad;
	long long cedula_hijo;
};
hijos hijo_usuario;
};
//se anida un TDA para la captura de datos de los hijos



int main() {
	
	//variables globales
	//cantidad de usuarios = n 
	
	int n=0, i;
	

	//Se solicita numero de usuarios a registrar inicialemnte 
	cout<<"Bienvenido al sistema informatico del gym :) "<<endl;
	cout<<endl<<"Cuantas personas desea ingresar al sistema "<<endl;
	cin>>n;
	
	//se declara una variable del tipo cliente y se crea un vector del TDA de tamaño n
	cliente persona[n];

	//Se crea un ciclo para capturar todos los datos de los usuarios a registrar 
	for(i=0;i<n;i++){
	
	//Se solicita y almacena cada dato
	cout<<endl<<"Ingrese los datos de la persona numero "<<i+1<<endl;
	cout<<endl<<"Ingrese su nombre "<<endl;
	cout<<">> ";
	cin>> persona[i].nombre;

	cout<<"Digite su edad: "<<endl;
	cout<<">> ";
	cin>>persona[i].edad;
	
	cout<<"Digite su numero de cedula: "<<endl;
	cout<<">> ";
	cin>>persona[i].cedula;
	
	cout<<"Ingrese su masa corporal en decimales: "<<endl;
	cout<<">> ";
	cin>>persona[i].masa;
	
	cout<<"Digite f si es mujer, m si es hombre: "<<endl;
	cout<<">> ";
	cin>>persona[i].genero;
	
	cout<<"Ingrese su correo electronico: "<<endl;
	cout<<">> ";
	cin>>persona[i].correo;
	
	cout<<"Digite el numero de su celular: "<<endl;
	cout<<">> ";
	cin>>persona[i].celular;
	
	cout<<"Cuantos hijos tiene: "<<endl;
	cout<<">> ";
	cin>>persona[i].hijo_usuario.cantidad;
	
	//condición para que el programa pregunte o no los datos de los hijos 
	if(persona[i].hijo_usuario.cantidad>0){
	cout<<"Ingrese la cedula de su hijo "<<endl;
	cout<<">> ";
	cin>>persona[i].hijo_usuario.cedula_hijo;
	}
	
	cout<<"Ingrese su direccion sin espacios: "<<endl;
	cout<<">> ";
	cin>>persona[i].direccion;
    }
	// se imprime nombre de los usuarios registrados satisfatoriamente
	cout<<endl<<"Usuarios registrados satisfactoriamente: "<<endl;
	for(i=0;i<n;i++){
	cout<<endl<<i+1<<": "<<persona[i].nombre<<endl;
    }
	
	
	
	return 0;
}
