#include <iostream>
// #include <math.h>

using namespace std;

int main() {

    // suma de los cuadrados del 1 al 10

    int numero, suma;

    for(int i = 0; i <= 10; i++) {
        // int cuadrado = pow(i, 2); // pow gasta un poco más de memoria
        int cuadrado = i * i;
        cout << "El cuadrado de " << i << ": "<< cuadrado << "\n";
        suma += cuadrado;
    }

    cout << "\n La suma de los cuadrados del 1 al 10 es: " << suma << "\n";

    system("pause");

    return 0;
}