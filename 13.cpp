#include <iostream>
#include <cmath>

using namespace std;

// Clase base para figuras geométricas
class FiguraGeometrica {
public:
    virtual float area() = 0;
    virtual float perimetro() = 0;
};

// Clase para un cuadrado
class Cuadrado : public FiguraGeometrica {
private:
    float lado;
public:
    Cuadrado(float lado) : lado(lado) {}

    float area() override {
        return lado * lado;
    }

    float perimetro() override {
        return 4 * lado;
    }
};

// Clase para un círculo
class Circulo : public FiguraGeometrica {
private:
    float radio;
public:
    Circulo(float radio) : radio(radio) {}

    float area() override {
        return M_PI * radio * radio;
    }

    float perimetro() override {
        return 2 * M_PI * radio;
    }
};

// Clase para un triángulo
class Triangulo : public FiguraGeometrica {
private:
    float base;
    float altura;
public:
    Triangulo(float base, float altura) : base(base), altura(altura) {}

    float area() override {
        return (base * altura) / 2;
    }

    float perimetro() override {
        // Suponemos que es un triángulo equilátero para este ejemplo
        return 3 * base;
    }
};

int main() {
    // Crear objetos de las figuras geométricas
    Cuadrado cuadrado(5);
    Circulo circulo(3);
    Triangulo triangulo(4, 5);

    // Calcular y mostrar el área y el perímetro de cada figura
    cout << "Cuadrado:" << endl;
    cout << "Area: " << cuadrado.area() << endl;
    cout << "Perimetro: " << cuadrado.perimetro() << endl;

    cout << endl;

    cout << "Circulo:" << endl;
    cout << "Area: " << circulo.area() << endl;
    cout << "Perimetro: " << circulo.perimetro() << endl;

    cout << endl;

    cout << "Triangulo:" << endl;
    cout << "Area: " << triangulo.area() << endl;
    cout << "Perimetro: " << triangulo.perimetro() << endl;

    return 0;
}

