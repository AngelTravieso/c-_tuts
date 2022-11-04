#include <iostream>

using namespace std;

int main() {

    /*
        Cuando no se asigna un valor a un int, c++ asigna el valor maximo de un entero
        a la variable (4m y algo)
    */

    int numero, suma = 0;

    do
    {
        cout << "Ingresa un numero entero positivo (100 a 200 o 0 cierra el programa): ";
        cin >> numero;

        suma += numero;

        cout << "\n Aqui esta la suma: " << suma << "\n";

    } while ( ( (numero < 100) || (numero > 200) ) && (numero != 0) ) ;

    system("pause");

    return 0;
}