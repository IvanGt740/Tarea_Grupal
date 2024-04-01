#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    char continuar;
    int resta = 100;
    
    do {
        cout << "Resta actual: " << resta << endl;
        cout << "¿Desea restar 5 más? (s/n): ";
        cin >> continuar;
        
        resta -= 5;
        
    } while (continuar == 's' || continuar == 'S');

    cout << "La resta total es: " << resta << endl;

    return 0;
}
