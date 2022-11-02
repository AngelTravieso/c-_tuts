#include <iostream>

/*
Esta es la funcion principal
Podemos ingresar numeros y se van a mostrar
*/

int main() {
    // inicializar
    float numero;

    std::cout << "Humano!!! ingresa un numero entero: ";

    // De lo que se ingresa a la variable
    std::cin >> numero; // cin pide cualquier texto (int, string)

    std::cout << "Humano este es el numero que ingresaste: ";
    std::cout << numero;

    // Escribir nueva linea
    std::cout << "\n";

    // detener programa
    system("pause"); // forma recomendada

    // std::cin.get(); // .get() pide presionar una tecla

    return 0;
}