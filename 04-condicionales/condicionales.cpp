#include <iostream>

int main() {

    // Asignacion: =
    int numeroIngresado, numeroAEncontrar = 5; 

    std::cout << "A ver humano ingresa un numero mayor o igual al que estoy pensando: ";
    std::cin >> numeroIngresado;

    // Comparacion: ==
    // Diferente: !=
    // Mayor: >
    // Mayor o igual que: >=
    // Menor: >
    // Menor o igual que: <=

    if(numeroIngresado >= numeroAEncontrar) {
        std::cout << "Bien jugado hdpt!... \n";
    } else {
        std::cout << "Sigue intentado...\n";
    }

    system("pause");

    return 0;
}