//crear las tablas de multiplicar del 1 - 10

#include <iostream>

using namespace std;

int main() {
	
	//utilizo un bucle for para imprimir las tablas de multiplicar 
	
    cout << "Tablas de multiplicar del 1 al 10:" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << "Tabla de multiplicar del " << i << ":" << endl;
        for (int j = 1; j <= 10; ++j) {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }

    return 0;
}

