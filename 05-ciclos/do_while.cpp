#include <iostream>

using namespace std;

int main() {

    // Se ejecuta siempre una primera vez

    // inicializar
    char letra;

    // accion
    do {
        cout << "Presiona la letra a: ";
        cin >> letra;
    } while(letra == 'a'); // condicion

    cout << "Letra equivocada...\n";

    system("pause");

    return 0;
}