#include <iostream>

int main() {

    float practicas, participacion, examen, res;

    std::cout << "Humano ingresa los datos que se te piden a continuacion: \n";

    std::cout << "Valor de la calificacion de las practicas: "; std::cin >> practicas;
    std::cout << "Valor de la calificacion de la participacion: "; std::cin >> participacion;
    std::cout << "Valor de la calificacion del examen: "; std::cin >> examen;

    practicas *= 0.40;
    participacion *= 0.20;
    examen *= 0.40;

    res = practicas + participacion + examen;

    std::cout << "Aqui esta tu calificacion: " << res << "\n";

    system("pause");

    return 0;
}