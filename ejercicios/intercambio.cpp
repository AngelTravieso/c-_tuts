#include <iostream>

int main() {

    int a, b, aux;

    std::cout << "Humano escrible lo que se pida: \n";

    std::cout << "Valor de a: "; std::cin >> a;
    std::cout << "Valor de b: "; std::cin >> b;

    aux = a; // 10
    a = b; // 10
    b = a; // 3
    b = aux; // 3

    std::cout << "Humano aqui estan los valores intercambiados: \n";

    std::cout << "Valor de a: " << a << "\n";
    std::cout << "Valor de b: " << b << "\n";

    system("pause");

    return 0;
}