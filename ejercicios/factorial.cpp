#include <iostream>

using namespace std;

int main() {

    // factorial de un numero

    int numero, mult = 1;

    do {
        cout << "Ingresa un numero entero positivo: ";
        cin >> numero;
    } while(numero < 1);

    for(int i = 1; i <= numero; i++) {
        mult *= i;
    }

    cout << "calculando...\n";

    cout << "El factorial de " << numero << " es: " << mult << "\n";


    system("pause");

    return 0;
}