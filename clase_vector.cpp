#include <iostream>
#include <vector>

/*********************************************************************
Febrero 8/2023
Natalia Catalina Guzmán Fuentes
Clase vector (biblioteca de funciones y métodos de la clase vector)

**********************************************************************/

using namespace std;

int main() {
	
	//Se declaran vectores a usar
	
	vector<int> vector01;
	vector<int> vector02;//{1,2,3,4,5,100};
	int i,j,k;
	
	//Se imprime la primera versión del vector02
	cout<<"Pimera version del vector"<<endl;
	for(const int &i: vector02){
		cout<<i<<" "<<endl;
	}
	
	//Se actualiza el vector con valores al final
	vector02.push_back(98);
	vector02.push_back(21);
	
	//Se imprime la segunda version del vector02
	
	cout<<"Segunda version del vector"<<endl;
	for(const int &i: vector02){
		cout<<i<<" "<<endl;
	}
	
	
	
	
	//Se asigna un tamaño y se inicializa en un valor
	
	vector01.assign(10, 304);
	
	//Se imprime primera versión del vector
	
	cout<<"Primera version del vector"<<endl;
	for (i=0; i<vector01.size(); i++){
		cout<<vector01[i] << " ";
		cout<<endl;
	}
	//Se ingresa el valor 5 al final
	vector01.push_back(5);
	
	//Se imprime la segunda versión
	cout<<endl<<"Segunda version del vector"<<endl;
	for (i=0; i<vector01.size(); i++){
		cout<<vector01[i] << " ";
		cout<<endl;
	}
	
	//Se elimina el último elemento
	vector01.pop_back();
	
	//Se imprime la tercera versión
	cout<<endl<<"Tercera version del vector"<<endl;
	for (i=0; i<vector01.size(); i++){
		cout<<vector01[i] << " ";
		cout<<endl;
    }
    
    //Se inserta un elemento al inicio del vector
    vector01.insert(vector01.begin(),1002);
    //Se imprime la cuarta versión
    	cout<<endl<<"Cuarta version del vector"<<endl;
	for (i=0; i<vector01.size(); i++){
		cout<<vector01[i] << " ";
		cout<<endl;
    }
    
    //Se limpia el vector
    vector01.clear();
    //Se imprime la quinta verisón
    
    cout<<endl<<"Quinta version del vector"<<endl;
	for (i=0; i<vector01.size(); i++){
		cout<<vector01[i] << " ";
		cout<<endl;
    } 
    
    
	return 0;
}
