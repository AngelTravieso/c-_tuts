#include <iostream>

using namespace std; 

int main() {

    // Copiar el contenido de una matriz a otra matriz

    int matrizA[100][100], matrizB[100][100], filas, columnas;

    cout << "Ingresa la cantidad de filas de tu matriz: ";
    cin >> filas;
    // cin >> filas >> columnas;

    cout << "Ingresa la cantidad de filas de tu matriz: ";
    cin >> columnas;

    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << "Ingresa la posicion [" << (i + 1) << "][" << (j + 1) << "]: ";
            cin >> matrizA[i][j];
        }
    }

    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            matrizB[i][j] = matrizA[i][j];
        }
    }

    cout << endl << endl;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matrizB[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << endl;

    system("pause"); 

    return 0; 

}