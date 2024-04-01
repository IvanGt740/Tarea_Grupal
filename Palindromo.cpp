#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
    char opcion;

    while (true) {
        cout <<"¿Desea determinar si una palabra o un numero es palindromo (S/N)?"<< endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 'S':
            case 's': {
                string palabra;
                cout << "Ingrese una palabra o un numero para determinar si es un palindromo:" << endl;
                cout << "Por favor, en caso de ser un numero, escribalo en letras" << endl;
                cin >> palabra;

                bool es_palindromo = true;
                int izquierda = 0;
                int derecha = palabra.length() - 1;

                while (izquierda < derecha) {
                    if (palabra[izquierda] != palabra[derecha]) {
                        es_palindromo = false;
                        break;
                    }
                    izquierda++;
                    derecha--;
                }

                if (es_palindromo)
                    cout << palabra << " es un palindromo." << endl;
                else
                    cout << palabra << " no es un palindromo." << endl;

                break;
            }
            case 'N':
            case 'n':
                cout << "Saliendo del programa..." << endl;
                return 0;
            default:
                cout << "Error, por favor escriba solo S o N." << endl;
                break;
        }
    }

    return 0;
}