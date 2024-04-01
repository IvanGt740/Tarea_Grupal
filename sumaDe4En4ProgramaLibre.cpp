#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    char continuar;
    int suma = 0;
    
    do {
        int numero;
        cout << "Ingrese un numero: ";
        cin >> numero;

        suma += numero;

        cout << "Suma actual: " << suma << endl;
        cout << "¿Desea ingresar otro numero? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    cout << "La suma total de los numeros ingresados es: " << suma << endl;

    return 0;
}
