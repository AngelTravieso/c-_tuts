#include <iostream>

using namespace std;

int main() {

    // fibonacci

    int numero, a = 0, b = 1, c= 0;

    do {
        cout << "Ingresa un numero entero positivo: ";
        cin >> numero;
    } while( numero < 1 );

    cout << "1 ";

    for(int i = 1; i <= numero; i++) {
        c = a + b; // 1
        cout << c << " ";
        a = b; // 1
        b = c; // 0
    }

    cout << "\n calculando...\n";

    system("pause");

    return 0;
}