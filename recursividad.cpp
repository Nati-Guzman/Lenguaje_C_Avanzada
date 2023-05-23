/******************************************************************************

Natalia Guzmán
Recursividad

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;
void myFunction (int counter);
int main()
{
 

    return 0;
}
void myFunction (int counter){
    if(counter==0)
    return;
    else{
        cout<<counter<<endl;
        myFunction(--counter);
        return;
    }
}
//el código sirve para imprimir una cuenta regresiva dado un número

void myFunction (int counter){
    if(counter==0)
    return;
    else{
        cout<<"Hello"<<counter<<endl;
        myFunction(--counter);
        cout<<counter<<endl;
        return;
    }
}
/*El código es una función que imprime la palabra "Hello" seguida de un número entero y luego llama a sí misma para imprimir una cuenta
regresiva dado aquel número entero*/
