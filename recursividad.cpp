/******************************************************************************

Natalia Guzm�n
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
//el c�digo sirve para imprimir una cuenta regresiva dado un n�mero

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
/*El c�digo es una funci�n que imprime la palabra "Hello" seguida de un n�mero entero y luego llama a s� misma para imprimir una cuenta
regresiva dado aquel n�mero entero*/
