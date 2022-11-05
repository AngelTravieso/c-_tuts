#include <iostream>

using namespace std;

int main() {
    // declarar e inicializar arreglo
    int numeros[] = {1, 2, 3, 4, 5}, suma = 0;

    // recorrer arreglo
    for(int i = 0; i < 5; i++) {
        suma += numeros[i];
        if(i == 4) {
            cout << numeros[i] << " = " << suma << endl;
            break;
        }
        cout << numeros[i] << " + ";
    }

    cout << endl << "La suma es: " << suma << endl;

    system("pause");

    return 0;
}