#include <iostream>

int main() {

    int numero;

    std::cout << "Humano por favor ingresa un numero entero: ";
    std::cin >> numero;

    // %: modulo division
    if(numero % 2 == 0) {
        std::cout << "El numero " << numero << " es par \n";
    } else {
        std::cout << "El numero " << numero << " es impar \n";
    }


    system("pause");

    return 0;
}