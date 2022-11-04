#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int numero, suma = 0, potencia = 0;

    do {
        cout << "Ingresa un numero entero positivo: ";
        cin >> numero;
    } while( numero < 1 );

    for(int i = 1; i <= numero; i++) {
        potencia = pow(2, i);
        suma += potencia;
    }

    cout << "Resultado de la sumatoria en potencia: " << suma << "\n";

    system("pause");

    return 0;
}