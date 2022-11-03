#include <iostream>

using namespace std;

int main() {

    int opcion;

    float total = 1000, ingreso, egreso;

    cout << "Bienvenido al banco!! \n";

    regreso:
        cout << "Por favor digita una opcion: \n";

        cout << "1.- Ingreso de dinero \n";
        cout << "2.- Egreso de dinero \n";
        cout << "3.- Salir \n";

        cin >> opcion;

        switch(opcion) {
            // Ingreso
            case 1:
                cout << "Cuanto dinero vas a ingresar?: ";
                cin >> ingreso;
                total += ingreso;
                cout << "Tienes en el banco $" << total << "\n";
                goto regreso;
            // Egreso
            case 2:
                cout << "Cuanto dinero vas a retirar?: ";
                cin >> egreso;
                // Si quiere retirar más de lo que tiene
                if(egreso > total) {
                    cout << "Saldo insuficiente, tienes $"<< total << "\n";
                } else {
                    total -= egreso;
                    cout << "Tienes en el banco $" << total << "\n";
                }
                goto regreso;
            // Salir
            case 3:
                break;
            // Opcion no valida
            default:
                goto regreso;
        }

    system("pause");

    return 0;
}