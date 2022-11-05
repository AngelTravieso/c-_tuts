#include <iostream>

using namespace std; 

int main() { 

    /*
        arrays (arreglo unidimensional)
        matriz o tabla (arreglo bidimensional)
    */


   // declarar matriz
   //      1      2       3        4
   // tipo_dato nombre [filas][columnas]
   int numeros[2][3];

   // asignar valor a una matriz
   numeros[0][0] = 1;

   // declarar e inicializar una matriz (manera 1)
   // 1era fila (toma la longitud), 2da fila, etc
//    int numeros[2][3] = {1,2,3 , 1,2,3};

   // declarar e inicializar una matriz (manera 2 - recomendada)
   // separa por llaves las filas
   int numeros[2][3] = { {1,2,3}, {1,2,3} };


    system("pause"); 

    return 0; 

}