#include <iostream>

using namespace std; 

int main() { 

    int arr[100], size, mayor = 0;

    do {
        cout << "Ingresa la longitud del arreglo: ";
        cin >> size;
    } while( ( size < 1 ) || ( size > 100 ) );

    for (int i = 0; i < size; i++) {
        cout << "Ingresa el valor del elemento " << (i + 1) << ": ";
        cin >> arr[i];
        
        // guardar el numero con mayor valor
        if(arr[i] > mayor) {
            mayor = arr[i];
        }
    }

    cout << "El numero mayor de tu arreglo es: " << mayor << endl;
    
    system("pause"); 

    return 0; 

}