#include <iostream>
#include <cmath>

using namespace std;

// Estructura para representar un punto en el plano cartesiano
struct Punto {
    float x;
    float y;
};

// Función para calcular la distancia entre dos puntos
float calcularDistancia(Punto punto1, Punto punto2) {
    float distancia = sqrt(pow((punto2.x - punto1.x), 2) + pow((punto2.y - punto1.y), 2));
    return distancia;
}

int main() {
    Punto punto1, punto2;

    cout << "Ingrese las coordenadas del primer punto (x y): ";
    cin >> punto1.x >> punto1.y;

    cout << "Ingrese las coordenadas del segundo punto (x y): ";
    cin >> punto2.x >> punto2.y;

    float distancia = calcularDistancia(punto1, punto2);

    cout << "La distancia entre los dos puntos es: " << distancia << endl;

    return 0;
}

