/******************************************************************************

Marzzo 31/2023
Natalia Catalina Guzmán Fuentes
Taller programación Avanzada

Ejercicios:

1) Círculo: Calcular área, perímetro y diámetro

2) Triángulo: Calcular perímetro,hipotenusa y altura

3) Crear 3 clases (Persona, Profesor, estudiante), que se pueden representar.
  El estudiante que curse noveno o superior, puede inscribirse en el curso de
  programción. En el programa principal, se presentan los 3 objetos, y si el
  estudiante puede o no hacer el curso de programación.
   

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;
 
//Se crea la clase Círculo
class Circulo {

    //Atributos
    private:

    float radio;
 
    //Métodos a implementar
    public:
    //Se crea el constructor de la clase circulo
    Circulo(float radio) {
    this->radio = radio;
    }
   
    //Método para obtener el radio
    float Obtener_Radio() {
     return radio;
    }

    //Método para obtener el área
    float Obtener_Area() {
    float pi=3.14159;
     return (pi*(pow(radio,2)));
    }

    //Método para obtener el Perimetro
    float Obtener_Perimetro() {
    float pi=3.14159;
     return 2 * pi * radio;
    }

    //Método para obtener el Diámetro
    float Obtener_Diametro() {
     return 2 * radio;
    }
};

//Se crea la clase Rectángulo
class Triangulo{

    //Atributos
    private:
   
    float cateto1, cateto2;

 
    //Métodos a implementar
    public:
   
    //Se crea constructor de la clase triangulo
    Triangulo(float c1, float c2) {
            cateto1 = c1;
            cateto2 = c2;
     }

    //Método para hallar la hipotenusa del triangulo
    float calcularHipotenusa() {
        return sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    }
   
    //Método para calcular el perimetro
    float calcularPerimetro() {
     float hipotenusa = calcularHipotenusa();
     return cateto1 + cateto2 + hipotenusa;
    }

    //Metodo para retornar la altura del triangulo dada el area y la hipotenusa
    float calcularAltura() {
    float area = (cateto1 * cateto2) / 2;
    float hipotenusa = calcularHipotenusa();
            return area / hipotenusa;
    }

};

//Se crea la clase persona
class Persona {

    //Atributos
    private:

    int edad;
   
    //Métodos a implementar
    public:

    string nombre;

    //Se crea el constructor de la clase persona(Clase madre)
    Persona(string nombre, int edad) {
       
        this->nombre = nombre;
        this->edad = edad;
    }

 
    //Método para hacer la introducción del sujeto
    void presentarse() {

        cout << "Hola! Yo soy " << nombre << " y tengo " << edad << " annos." << endl;
    }

};

 
//Se crea la clase profesor
class Profesor : public Persona {

    //Atributos
    private:

    string especialidad;
   
    //Métodos a implementar
    public:
    //Se crea el constructor de la clase profesor(clase hija)
    Profesor(string nombre, int edad, string especialidad) : Persona(nombre, edad) {

        this->especialidad = especialidad;
    }

 
    //Metodo para indicar la especialidad del sujeto
    void presentarse() {
        Persona::presentarse();
        cout << "Soy profesor@ de " << especialidad << "." << endl;
    }

};

 
//Se crea la clase estudiante
class Estudiante : public Persona {
   
    //Atributos
    private:

    int grado;
    //Métodos
    public:

    //Constructor de clase estudiantes con herencia de la clsae persona
    Estudiante(string nombre, int edad, int grado) : Persona(nombre, edad) {
        this->grado = grado;
    }

 
    //Metodo para indicar el grado del estudiante
    void presentarse() {
        Persona::presentarse();
        cout << "Soy estudiante de " << grado << " grado." << endl;
    }

 
    //Método para validar si puede inscribirse o no a la clase
    bool puedeInscribirse() {
        return grado >= 9;
    }

};

//Función principal
int main() {

  int opcion;
    cout<<"Bienvenido al programa!"<<endl;
  //Menú para ejecutar el programa según lo pedido por el usuario    
  do{
      cout<<"Que desea imprimir en pantalla?"<<endl;
      cout<<"1. Circulo" <<endl;
      cout<<"2. Triangulo "<<endl;
      cout<<"3. Presentar persona "<<endl;

      cout<<"Ingrese la opcion que desea: "<<endl;
      cout<<">> ";
      cin>>opcion;

     switch (opcion) {

         case 1:

            { Circulo circulo(12);
                  cout << "Radio: " << circulo.Obtener_Radio() << endl;
                  cout << "Area: " << circulo.Obtener_Area() << endl;
                  cout << "Perimetro: " << circulo.Obtener_Perimetro() << endl;
                  cout << "Diametro: " << circulo.Obtener_Diametro() << endl;
            }

             break;

             case 2:

             {Triangulo triangulo(12, 4);
              float perimetro = triangulo.calcularPerimetro();
              float hipotenusa = triangulo.calcularHipotenusa();
              float altura = triangulo.calcularAltura();

              cout << "Perimetro del triangulo: " << perimetro << endl;
              cout << "Hipotenusa del triangulo rectangulo: " << hipotenusa << endl;
              cout << "La altura del triangulo: " << altura << endl;
             }

             break;

             case 3:
             Persona persona("Pablo", 50);

             Profesor profesor("Tola", 50, "Matemáticas");

             Estudiante estudiante("Ramon", 48, 9);

             persona.presentarse();

             profesor.presentarse();

             estudiante.presentarse();

                  if (estudiante.puedeInscribirse()) {
                  cout << "El estudiante " << estudiante.nombre << " puede inscribirse en el curso de programación." << endl;

                  } else {
                  cout << "El estudiante " << estudiante.nombre << " no puede inscribirse en el curso de programación." << endl;
                 }

                 cout << "Opcion invalida." << endl;

             break;

    }

 

}while(opcion!=3);

}
