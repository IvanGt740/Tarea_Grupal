//Crear un programa que haga la conversion de numeros enteros con decimal a letras 

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// Funcion para convertir la parte entera de un n�mero a letras
string convertir_parte_entera_a_letras(int parte_entera) {
    string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "diecis�is", "diecisiete", "dieciocho", "diecinueve"};
    string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

    if (parte_entera < 10) {
        return unidades[parte_entera];
    } else if (parte_entera < 20) {
        return especiales[parte_entera - 10];
    } else if (parte_entera < 100) {
        if (parte_entera % 10 == 0) {
            return decenas[parte_entera / 10];
        } else {
            return decenas[parte_entera / 10] + " y " + unidades[parte_entera % 10];
        }
    } else if (parte_entera < 1000) {
        if (parte_entera % 100 == 0) {
            return centenas[parte_entera / 100];
        } else {
            return centenas[parte_entera / 100] + " " + convertir_parte_entera_a_letras(parte_entera % 100);
        }
    } else {
        return "Numero fuera de rango";
    }
}

// Funcion para convertir la parte decimal de un numero a letras
string convertir_parte_decimal_a_letras(int parte_decimal) {
    if (parte_decimal < 10) {
        return "cero " + convertir_parte_entera_a_letras(parte_decimal);
    } else {
        return convertir_parte_entera_a_letras(parte_decimal / 10) + " " + convertir_parte_entera_a_letras(parte_decimal % 10);
    }
}

// Funci�n para convertir un n�mero entero con decimal a letras
string convertir_numero_a_letras(double numero) {
    int parte_entera = static_cast<int>(numero);
    int parte_decimal = static_cast<int>((numero - parte_entera) * 100);

    string resultado;

    if (parte_entera == 0) {
        resultado = "cero";
    } else {
        resultado = convertir_parte_entera_a_letras(parte_entera);
    }

    if (parte_decimal > 0) {
        resultado += " punto " + convertir_parte_decimal_a_letras(parte_decimal);
    }

    return resultado;
}

int main() {
    double numero;
    cout << "Ingrese un numero decimal: ";
    cin >> numero;

    cout << "El numero " << numero << " en letras es: " << convertir_numero_a_letras(numero) << endl;

    return 0;
}

