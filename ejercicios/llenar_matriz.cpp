#include <iostream>

using namespace std; 

int main() { 

    int matriz[100][100], fila, columnas;

    cout << "Cuantas filas tendra tu matriz: ";
    cin >> fila;

    cout << "Cuantas columnas tendra tu matriz: ";
    cin >> columnas;

    for(int i = 0; i < fila; i++) {
        // ciclo anidado
        for(int j = 0; j < columnas; j++) {
            cout << "Ingresa el valor de la posicion " << ( i + 1 ) << ", " << ( j + 1) << " : ";
            // guardar valor en la matriz
            cin >> matriz[i][j];
        }
    }

    cout << endl << endl;

    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }

        cout << endl;
    }

    cout << endl << endl;
    
    system("pause"); 

    return 0; 

}