#include <iostream>

using namespace std; 

int main() { 

    int arr1[5], arr2[5], arr3[3];

    // Llenar arr 1
    for (int i = 0; i < 5; i++) {
        cout << "Ingresa en el arreglo 1 el valor " << (i + 1) << ": ";
        cin >> arr1[i];
    }

    // Llenar arr 2
    for (int i = 0; i < 5; i++) {
        cout << "Ingresa en el arreglo 2 el valor " << (i + 1) << ": ";
        cin >> arr2[i];
    }

    // Union de arreglos
    for (int i = 0; i < 10; i++) {
        if( i < 5 ) {
            arr3[i] = arr1[i];
        }

        if( i >= 5) {
            arr3[i] = arr2[i - 5];
        }
    }

    // imprimir el arreglo directamente devuelve la direccion en memoria, hay que recorrerlo
    //! cout << arr3;

    for (int i = 0; i < 10; i++) {
        cout << (i + 1) <<". - " << arr3[i] << endl;
    }

    system("pause");

    return 0; 

}