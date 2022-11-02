#include <iostream>
#include <math.h> // libreria para funciones matematicas

int main() {

    float x, y, res;

    std::cout << "Humano digita lo solicitado: \n";
    std::cout << "Valor de x: "; std::cin >> x;
    std::cout << "Valor de y: "; std::cin >> y;

    // sqrt: raiz cuadrada
    // pow: potencia
    res = (sqrt(x)) / ( pow(y, 2) - 1 );

    // obtener solo 3 decimales
    std::cout.precision(3);

    std::cout << "El resultado es: " << res << "\n";

    // inf = infinito

    system("pause");

    return 0;
}