#include <iostream>
#include <iomanip>

using namespace std;

void dibujarLinea(int longitud) {
    for (int i = 0; i < longitud; ++i) {
        cout << "-";
    }
    cout << endl;
}

void dibujarNumero(int numero, int ancho) {
    cout << setw(ancho) << numero;
}

void multiplicacionManual(int multiplicando, int multiplicador) {
    int resultado = multiplicando * multiplicador;
    int longitudResultado = to_string(resultado).length() + 1;

    dibujarNumero(multiplicando, longitudResultado);
    cout << endl;
    dibujarLinea(longitudResultado);
    dibujarNumero(multiplicador, longitudResultado);
    cout << "x" << endl;
    dibujarLinea(longitudResultado);

    int linea = 0;
    while (multiplicador > 0) {
        int fila = (multiplicador % 10) * multiplicando;
        dibujarNumero(fila, longitudResultado - linea);
        cout << endl;
        resultado -= fila * pow(10, linea);
        multiplicador /= 10;
        linea++;
    }
    dibujarLinea(longitudResultado);
    dibujarNumero(resultado, longitudResultado);
}

int main() {
    multiplicacionManual(45, 32);
    return 0;
}
