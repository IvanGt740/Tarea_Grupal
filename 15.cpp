#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

// Clase para el cajero autom�tico
class CajeroAutomatico {
private:
    float saldo;
public:
    CajeroAutomatico(float saldoInicial) : saldo(saldoInicial) {}

    void depositar(float cantidad) {
        saldo += cantidad;
    }

    void retirar(float cantidad) {
        if (cantidad <= saldo) {
            saldo -= cantidad;
        } else {
            cout << "Saldo insuficiente." << endl;
        }
    }

    float obtenerSaldo() const {
        return saldo;
    }
};

int main() {
    CajeroAutomatico cajero(1000); // Saldo inicial del cajero autom�tico

    cout << "Bienvenido al Cajero Automatico" << endl;

    while (true) {
        cout << "Opciones:" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Depositar dinero" << endl;
        cout << "3. Retirar dinero" << endl;
        cout << "4. Salir" << endl;

        int opcion;
        cout << "Ingrese el numero de la opcion deseada: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cout << "Su saldo actual es: $" << fixed << setprecision(2) << cajero.obtenerSaldo() << endl;
                break;
            }
            case 2: {
                float cantidad;
                cout << "Ingrese la cantidad a depositar: $";
                cin >> cantidad;
                cajero.depositar(cantidad);
                cout << "Dep�sito exitoso." << endl;
                break;
            }
            case 3: {
                float cantidad;
                cout << "Ingrese la cantidad a retirar: $";
                cin >> cantidad;
                cajero.retirar(cantidad);
                break;
            }
            case 4: {
                cout << "Gracias por usar el Cajero Automatico. Hasta luego" << endl;
                return 0;
            }
            default: {
                cout << "Opcion no valida. Por favor, seleccione una opcion valida." << endl;
                break;
            }
        }
    }

    return 0;
}

