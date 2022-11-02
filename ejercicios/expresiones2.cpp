#include <iostream>

int main() {

    float a, b, c, d, e, f, res;

    std::cout << "Humano ingresa los valores numerico que se pidan: \n";

    std::cout << "Ingresa el valor de a: "; std::cin >> a;
    std::cout << "Ingresa el valor de b: "; std::cin >> b;
    std::cout << "Ingresa el valor de c: "; std::cin >> c;
    std::cout << "Ingresa el valor de d: "; std::cin >> d;
    std::cout << "Ingresa el valor de e: "; std::cin >> e;
    std::cout << "Ingresa el valor de f: "; std::cin >> f;

    res = (a + (b / c)) / (d + (e / f));

    std::cout.precision(3);

    std::cout << "\n Humano aqui esta tu resultado: " << res << "\n";
    
    system("pause");

    return 0;
}