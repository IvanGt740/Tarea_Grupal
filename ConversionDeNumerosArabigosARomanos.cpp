#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string convertirANumerosRomanos(int numero) {
    if (numero < 1 || numero > 1000) {
        return "Numero fuera de rango.";
    }

    string romano = "";

    // Convertir unidades
    string unidades[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    romano += unidades[numero % 10];

    // Convertir decenas
    string decenas[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    romano = decenas[(numero % 100) / 10] + romano;

    // Convertir centenas
    string centenas[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    romano = centenas[(numero % 1000) / 100] + romano;

    // Convertir miles
    string miles[] = {"", "M", "MM"};
    romano = miles[(numero % 10000) / 1000] + romano;

    return romano;
}

int main() {
    int numero;
    cout << "Ingrese un numero arabigo del 1 al 1000: ";
    cin >> numero;

    string numero_romano = convertirANumerosRomanos(numero);
    cout << "El numero " << numero << " en numeros romanos es: " << numero_romano << endl;

    return 0;
}


