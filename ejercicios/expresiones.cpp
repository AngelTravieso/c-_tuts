#include <iostream>

int main() {

    float a, b, res;

    std::cout << "Humano, por favor ingresa lo siguiente: \n";

    std::cout << "valor a: "; std::cin >> a;
    std::cout << "valor b: "; std::cin >> b;

    // redonder decimales
    std::cout.precision(3);

    res = ( a / b ) + 1;

    std::cout << "resultado: " << res << "\n";

    system("pause");

    return 0;
}