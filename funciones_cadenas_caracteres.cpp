#include <iostream>
#include <stdio.h>
#include <cstring>
/***************************************************************************************************

Marzo 6/2023
Funciones de cadena de caracteres


***************************************************************************************************/
using namespace std;


int main(int argc, char** argv) {
	
	
	//Forma correcta 
	cout<<">> Funcion strcpy"<<endl;
	char pal2[5]="hola";
	char *pal4;
	//+1 para el caracter nul
	pal4=new char[strlen(pal2)+1];
	strcpy(pal2,"otro");
	strcpy(pal4,"hola");
	cout<<pal2<<endl;
	cout<<pal4<<endl;
	//lo que está en pal2 lo pongo en pal4
	strcpy(pal4, pal2);
	cout<<pal2<<endl;
	cout<<pal4<<endl;
	strcpy(pal2,"TEST");
	cout<<pal2<<endl;
	cout<<pal4<<endl;	
	
	cout<<endl;
	
	//Función strcat (agrga contendio al primero)
	cout<<">> Funcion strcat"<<endl;
	char*prueba="Esto es una prueba";
	char ejemplo[200]="Hola! ";
	cout<<ejemplo<<endl;//Hola!
	strcat(ejemplo,prueba);
	cout<<ejemplo<<endl;//Hola! Esto es una prueba
	
	
	//Función strcmp (compara entre dos cadenas)
	cout<<">> Funcion strcmp "<<endl;
	int compara=0;
	char *nombre1=new char [20];
	char *nombre2=new char[20];
	char *nombre3= new char[20];
	strcpy (nombre1,"Alberto");
	strcpy(nombre2, "Maria");
	compara=strcmp(nombre2, nombre1);
	cout<<" "<<compara<<endl; // 1
	compara=strcmp(nombre1,nombre2);
	cout<<" "<<compara<<endl;// -1
	strcpy(nombre1, "Maria");
	cout<<" "<<strcmp(nombre2, nombre1)<<endl;// 0
	
	//Funciones de cadena
	cout<<">> Operador []: Acceder a un caracter de una cadena"<<endl;
	char *cadena= new char [15];
	strcpy(cadena, "Soy una cadena");
	cout<<cadena<<endl;
	for(int i=4; i<strlen(cadena); i++){
		cout<<"-"<<cadena[i]<<"-";
	}	
	
	
	/*forma posible pero no recomendable de la función strcpy
	char pal2[5]="hola";
	char *pal4;
	
	strcpy(pal2, "otro");
	pal4="Hola";
	cout<<pal2<<endl;
	cout<<pal4<<endl;
	pal4=pal2;
	cout<<pal2<<endl;
	cout<<pal4<<endl;
	strcpy(pal2, "TEST");
	cout<<pal2<<endl;
	cout<<pal4<<endl;
	*/
	
	return 0;
};

