#include <iostream>

int main() {

    char sexo[10];
    int edad;
    float estatura;

    std::cout << "Humano!!! escribe lo siguiente:";
    std::cout << "\n Sexo: "; std::cin >> sexo;
    std::cout << "\n Edad: "; std::cin >> edad;
    std::cout << "\n Estatura: "; std::cin >> estatura;

    std::cout << "\n HUMANO!!! ahí estan tus datos \n";

    std::cout << "Sexo: " << sexo << "\n";
    std::cout << "Edad: " << edad << "\n";
    std::cout << "Estatura: " << estatura << "\n";

    // Detener programa
    system("pause");

    return 0;
}