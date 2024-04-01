//crear una tabla de multiplicar 

#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	
	//declaro variables 
	
    int numero;
	
	//guardo el valor para la tabla de multipllicar 
	
	
    cout << "Ingrese un numero para generar su tabla de multiplicar: ";
    cin >> numero;
	
	//imprimo los valores de la tabla de multiplicar 
	
    cout << "Tabla de multiplicar del " << numero << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}

