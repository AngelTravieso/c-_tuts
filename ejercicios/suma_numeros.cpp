#include <iostream>

using namespace std;

int main() {

    int numero, suma = 0;

    do
    {
        cout << "Ingresa un numero mayor a 1: ";
        cin >> numero;
    } while ( numero <= 1 );

    for(int i = 0; i <= numero; i++) {
        suma += i;
        // cout << i << " + ";
    }

    cout << "Sumando...";
    
    cout << "\n Aqui esta la suma: " << suma << "\n";
    
    system("pause");

    return 0;
}