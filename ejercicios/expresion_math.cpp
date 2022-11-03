#include <iostream>
#include <math.h> // libreria para funciones matematicas

int main() {

    float x, y, res, yCuadradaMenosUno;

    std::cout << "Humano digita lo solicitado: \n";
    std::cout << "Valor de x: "; std::cin >> x;

    // goto (no recomendable), es preferible usar un ciclo while

    // label del goto
    ingresaYdeNuevo:
        std::cout << "Valor de y: "; std::cin >> y;

        // sqrt: raiz cuadrada
        // pow: potencia
        yCuadradaMenosUno = ( pow(y, 2) - 1 );
        res = (sqrt(x)) / yCuadradaMenosUno;

        // goto para devolver a un inicio en particular

    if(yCuadradaMenosUno == 0) {
        std::cout << "El valor de y no es valido, ingresa de nuevo el valor de y \n";
        goto ingresaYdeNuevo;
    }

    // obtener solo 3 decimales
    std::cout.precision(3);

    std::cout << "El resultado es: " << res << "\n";

    // inf = infinito

    system("pause");

    return 0;
}