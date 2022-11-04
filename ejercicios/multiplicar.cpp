#include <iostream>

using namespace std;

int main() {

    int numero;


    do {
        cout << "Ingresa un numero entre el 1 y el 10: ";
        cin >> numero;

        if(numero < 1) {
            cout << "Debe ser un numero entero positivo...\n";
        }

    } while(numero < 1 || numero > 10);

    
    for(int i = 0; i <= 10; i++) {
        cout << numero << " x " << i << " = " << ( numero * i ) << "\n";
    }

    system("pause");

    return 0;
}