#include <iostream>
#include <cstdlib> // para generar numeros random

using namespace std;

int main() {

    /*  
        Si se quiere obtener una secuencia diferente de numeros por cada ejecucion,
        llamamos al proceso de 'randomizing'. Randomizing es una "semilla" para
        generar una secuencia de numeros aleatoria
        * Solo invocar una vez al comienzo del programa, no hay necesidad de repetir el
        * llamado
        srand: 
        time(NULL): retorna el numero de segundo transcurridos en el tiempo de la computadora
    */

   // * 'endl' hace un salto de linea (lo mismo que \n) pero limpiando el buffer de salida

    srand(time(NULL));

    int numero, aleatorio, contador = 0;

    // generar numero aleatorio entre el 1 y el 100
    aleatorio = 1 + rand() % 100;

    do {
        cout << "Encuentra el numero aleatorio: ";
        cin >> numero;

        if(numero > aleatorio) {
            cout << "Uyy! el numero que ingresaste es mayor" << endl;
        }
        
        if(numero < aleatorio){
            cout << "Uyy! el numero que ingresaste es menor" << endl;
        }

        contador++;
    } while( numero != aleatorio );

    cout << "Felicidades, has adivinado el numero secreto (" << aleatorio << ")" << endl;
    cout << "total de intentos: " << contador << endl;


    system("pause");

    return 0;
}