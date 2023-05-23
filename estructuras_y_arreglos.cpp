#include <iostream>
#include <fstream>
#include <ctime>
/****************************************************************************

Febrero 6 /2023
Natalia Catalina Guzmán Fuentes 

- Crear una estructura corta para solicitar datos básicos de usuario
- Crear una lista de palabras a ser usadas aleatoriamente
- Almacenar palabras en un fichero 
- Leer y presentar en pantalla la lectura del fichero 

*****************************************************************************/

using namespace std;

//Se crea un estructura básica para la captura de datos de los usuarios

struct datos {
	string nombre, apellido;
	int edad;
};

//Se crea una lista como conjunto de palabras disponibles para jugar 

const string lista_palabras[] = {"hola", "mañana", "hoy", "tarde", "noche"};


//Se crea la función principal

int main() {
	
	//Se declaran variables a usar
	
	int i,j, cantidad;
	
	//Se pide la cantidad de usuarios
	
	cout<<"Ingrese la cantidad de usuarios: "<<endl;
	cin>>cantidad;
	
	//Se crea una variable de tipo struct del tamaño cantidad
	
	datos personas[cantidad];
	
	//Se piden los datos del usuario
	//Se escribe sobre un fichero: se usa "ofstream" para almacenar en el fichero
	//Se crea el objeto tipo ofstream (digital) junto con el nombre del fichero (físico) "taller_2.txt"
	
	ofstream fichero_escritura ("taller_2.txt");
	
	//Se pregunta si hay espacio en memoria para abrir el fichero
	
	if(fichero_escritura.is_open()){	
	for (i=0; i<cantidad; i++){
		
		cout<<endl<<"Ingrese los datos del usuario numero "<<i+1<<endl;
		cout<<"Ingrese el nombre: "<<endl;
		cin>>personas[i].nombre;
		fichero_escritura<<personas[i].nombre<<endl;
		cout<<"Ingrese el apellido: "<<endl;
		cin>>personas[i].apellido;
		fichero_escritura<<personas[i].apellido<<endl;
		cout<<"Ingrese la edad: "<<endl;
		cin>>personas[i].edad;
		fichero_escritura<<personas[i].edad<<endl;
	}
} else {
	cout<<"No tiene permisos de escritura!!!"<<endl;
}
	fichero_escritura.close();
	
	//Se imprimen los datos de los usuarios
	
		for (i=0; i<cantidad; i++){
		cout<<"Nombre del usuario ("<<i+1<<") "<<personas[i].nombre<<endl;
		cout<<"Apellido del usuario ("<<i+1<<") "<<personas[i].apellido<<endl;
		cout<<"Edad del usuario ("<<i+1<<") "<<personas[i].edad<<endl;
		cout<<endl;
	}
	
	
	
		/*for (i=0; i<cantidad; i++){
		
		cout<<endl<<"Ingrese los datos del usuario numero "<<i+1<<endl;
		cout<<"Ingrese el nombre: "<<endl;
		cin>>personas[i].nombre;
		cout<<"Ingrese el apellido: "<<endl;
		cin>>personas[i].apellido;
		cout<<"Ingrese la edad: "<<endl;
		cin>>personas[i].edad; */	
	
	
	
	return 0;
}
