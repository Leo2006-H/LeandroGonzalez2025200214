#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuario, contrasena;
    int opcion;
    int num1, num2, resultado;

    // Inicio de sesion
    cout << "===== INICIO DE SESION =====" << endl;
    cout << "Usuario: ";
    cin >> usuario;

    cout << "Contrasena: ";
    cin >> contrasena;

    // Validacion
    if (usuario == "Leandro" && contrasena == "1234") {

        cout << "\nBienvenido, " << usuario << "!" << endl;

        // Menu de calculadora
        cout << "\n===== CALCULADORA =====" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Pedir numeros
        cout << "\nIngrese el primer numero: ";
        cin >> num1;

        cout << "Ingrese el segundo numero: ";
        cin >> num2;

        // Operacion
        switch (opcion) {
            case 1:
                resultado = num1 + num2;
                cout << "Resultado: " << resultado << endl;
                break;

            case 2:
                resultado = num1 - num2;
                cout << "Resultado: " << resultado << endl;
                break;

            case 3:
                resultado = num1 * num2;
                cout << "Resultado: " << resultado << endl;
                break;

            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    cout << "Resultado: " << resultado << endl;
                } else {
                    cout << "Error: no se puede dividir entre cero." << endl;
                }
                break;

            default:
                cout << "Opcion no valida." << endl;
        }

    } else {
        cout << "\nUsuario o contrasena incorrectos." << endl;
    }

    return 0;
}
