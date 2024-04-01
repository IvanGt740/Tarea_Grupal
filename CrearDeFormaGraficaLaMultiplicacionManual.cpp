#include <iostream>
#include <iomanip>

using namespace std;

void dibujarLinea(int longitud) {
    for (int i = 0; i < longitud; ++i) {
        cout << "-";
    }
    cout << endl;
}

void dibujarNumero(int numero, int espacios) {
    cout << setw(espacios) << numero << endl;
}

void multiplicacionManual(int multiplicando, int multiplicador) {
    int resultado = multiplicando * multiplicador;
    int espacios = to_string(resultado).length() + 1;

    dibujarNumero(multiplicando, espacios);
    cout << "x";
    dibujarNumero(multiplicador, espacios);
    dibujarLinea(espacios);

    int parcial = 0;
    for (int i = 0; i < to_string(multiplicador).length(); ++i) {
        int fila = multiplicando * (multiplicador % 10);
        multiplicador /= 10;
        dibujarNumero(fila, espacios - i - 1);
        parcial += fila * pow(10, i);
    }
    dibujarLinea(espacios);
    dibujarNumero(resultado, espacios);
}

int main() {
    int multiplicando, multiplicador;
    cout << "Ingrese el multiplicando: ";
    cin >> multiplicando;
    cout << "Ingrese el multiplicador: ";
    cin >> multiplicador;

    multiplicacionManual(multiplicando, multiplicador);
    return 0;
}
