#include <iostream>

using namespace std; 

int main() { 

    // declarar y dar longitud al arreglo (100)
    int numero[100], n;

    do {
        cout << "Ingresa la cantidad de elementos de tu arreglo (mas de 1 y menos de 100): ";
        cin >> n;
    } while( (n < 1) || ( n > 100 ) );


    for (int i = 0; i < n; i++) {
        cout << "Ingresa el valor del elemento " << ( i + 1 ) << " : ";
        cin >> numero[i]; 
    }

    for (int i = 0; i < n; i++) {
        cout << ( i + 1 ) << " = " << numero[i] << endl;
    }

    system("pause"); 

    return 0; 

}