//crear un programa que convierta numeros enteros a letras

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
//por medio de un string declaramos las unidades, decenas, especiales y centenas 
string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
string decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "diecis�is", "diecisiete", "dieciocho", "diecinueve"};
string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};


//Por temas de comodidad utilizaremos la estructura en funcion if - else / else if 
string convertir_numero_a_letras(int numero) {
    if (numero < 10) {
        return unidades[numero];
    } else if (numero < 20) {
        return especiales[numero - 10];
    } else if (numero < 100) {
        if (numero % 10 == 0) {
            return decenas[numero / 10];
        } else {
            return decenas[numero / 10] + " y " + unidades[numero % 10];
        }
    } else if (numero < 1000) {
        if (numero % 100 == 0) {
            return centenas[numero / 100];
        } else {
            return centenas[numero / 100] + " " + convertir_numero_a_letras(numero % 100);
        }
    } else {
        return "Numero fuera de rango";
    }
}


//declaramos variables e imprimimos resultados 
int main() {
    int numero;
    cout << "Ingrese un numero entre 0 y 999: ";
    cin >> numero;
    
    if (numero < 0 || numero > 999) {
        cout << "Numero fuera de rango" << endl;
    } else {
        cout << "El numero " << numero << " en letras es:  " << convertir_numero_a_letras(numero) << endl;
    }
    
    return 0;
}

