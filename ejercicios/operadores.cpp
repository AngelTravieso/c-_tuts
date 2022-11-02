#include <iostream>

int main() {

    float n1, n2, suma, resta, multiplicacion, division;

    std::cout << "Humano!!! escribe un numero: ";
    std::cin >> n1;

    std::cout << "Humano!!! escribe otro numero: ";
    std::cin >> n2;

    // operaciones
    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;

    // concatenacion
    std::cout << "Resultado de la suma = " << suma << "\n";
    std::cout << "Resultado de la resta = " << resta << "\n";
    std::cout << "Resultado de la multiplicacion = " << multiplicacion << "\n";
    std::cout << "Resultado de la division = " << division << "\n";
    

    // Pausar el programa
    system("pause");

    return 0;
}