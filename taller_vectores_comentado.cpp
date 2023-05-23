/*********************************************

Febrero 8/2023
Natalia Catalina Guzmán Fuentes
Taller vectores

*********************************************/
#include <stdio.h>
#include <iostream>
#include<vector>

using namespace std;

int main()
{
    
    //Se declara vector 01 de 6 cajas tipo entero y se llena cada con 201
vector<int> vector01 (6,201);
   //Se declara vector02 de 4 cajas tipo entero y se llena cada con 400
vector<int> vector02 (4,400);
	//Se declara un iterador (puntero de la clase vector) del tipo entero
vector<int>::iterator it;
	//Se declara un aarray de tipo vacio con 5 cajsas inicializadas
int myarray[]={501,502,503,304,404};
	//Se imprimen los valores del vector01 usando el iterador
cout<<"Valores del vector01: "<<endl;
for(it=vector01.begin(); it<vector01.end();it++)
cout<<" "<<*it;
cout<<endl;
cout<<endl;
	//Se asigna el iterador al inicio del vector01
it=vector01.begin();
	//Se inserta el valor 200 al inicio del vector
it=vector01.insert(it,200);

cout<<"Nuevos valores del vector01: "<<endl;
for(it=vector01.begin(); it<vector01.end();it++)
cout<<" "<<*it;
cout<<endl;
cout<<endl;
//it no valido, signar de nuevo:
//insertar al inicio del vector 01, 2 veces 300
it=vector01.begin();
vector01.insert(it,2,300);

cout<<"Nuevos 2 valores del vector01: "<<endl;
for(it=vector01.begin(); it<vector01.end();it++)
cout<<" "<<*it;
cout<<endl;
cout<<endl;

it=vector01.begin();
//Insertar el vector02 en la segunda posicion del vector01
vector01.insert(it+2, vector02.begin(), vector02.end());
cout<<"Nuevos 3 valores del vector01: -- con inserción del vector02"<<endl;
for(it=vector01.begin(); it<vector01.end();it++)
cout<<" "<<*it;
cout<<endl;

//Al vector01 se le inserta al inicio los 3 primeros valores del arreglo 
vector01.insert(vector01.begin(), myarray, myarray+3);

cout<<endl<<"My vector contains: "<<endl;
for(it=vector01.begin(); it<vector01.end();it++)
cout<<" "<<*it;
cout<<endl;




    return 0;
}
