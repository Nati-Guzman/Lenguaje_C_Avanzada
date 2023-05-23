/******************************************************************************

Natalia Guzmán
Recursividad

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;
int Function (int array[], int tam);
int main()
{
  int array []={1,2,3};
  int tam;
  cout<<"Ingrese el tamaño del arreglo: "<<endl;
  cout<<">> ";
  cin>>tam;
  Function (array, tam);

    return 0;
}
int Function (int array[], int tam){
    cout<<"Debe sumar todos los números del arreglo de enteros"<<endl;
    int counter;//suma
    if(counter>0){
        for(int i=0;i<tam;i++){
            cout<<array[i]<<endl;
            counter+=array[i];
           
        }
       
        //--counter;
        return counter;
    }
    else{
        cout<<endl<<"No se puede hacer la suma"<<counter<<endl;
        //Function(--counter);
        //cout<<counter<<endl;
        return counter;
    }
}
