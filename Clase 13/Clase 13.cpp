#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

// Definicion de la estructura
struct Personaje {
    string nombre;
    int vida;
    int ataque;
};

// Funcion para registrar un personaje
void registrarPersonaje() {
    Personaje p;

    cout << "\n--- Registrar personaje ---\n";

    cout << "Nombre: ";
    getline(cin, p.nombre);

    cout << "Vida: ";
    while (!(cin >> p.vida) || p.vida < 0) {
        cout << "Introduce una vida valida: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Ataque: ";
    while (!(cin >> p.ataque) || p.ataque < 0) {
        cout << "Introduce un ataque valido: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Abrir el archivo en modo adicion
    ofstream archivo("personajes.txt", ios::app);

    if (!archivo.is_open()) {
        cout << "Error al abrir el archivo.\n";
        return;
    }

    // Guardar los datos
    archivo << p.nombre << '\n';
    archivo << p.vida << '\n';
    archivo << p.ataque << '\n';

    archivo.close();

    cout << "Personaje registrado correctamente.\n";
}

// Funcion para consultar los personajes
void verPersonajes() {
    Personaje p;

    ifstream archivo("personajes.txt");

    if (!archivo.is_open()) {
        cout << "\nNo se pudo abrir el archivo "
             << "o todavia no existe.\n";
        return;
    }

    cout << "\n--- Personajes registrados ---\n";

    bool encontrado = false;

    while (getline(archivo, p.nombre)) {
        if (!(archivo >> p.vida >> p.ataque)) {
            cout << "Error: registro incompleto.\n";
            break;
        }

        archivo.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "\nNombre: " << p.nombre << '\n';
        cout << "Vida: " << p.vida << '\n';
        cout << "Ataque: " << p.ataque << '\n';

        encontrado = true;
    }

    if (!encontrado) {
        cout << "No hay personajes registrados.\n";
    }

    archivo.close();
}

// Funcion principal con el menu
int main() {
    int opcion;

    do {
        cout << "\n===== MENU DE PERSONAJES =====\n";
        cout << "[1] Registrar nuevo personaje\n";
        cout << "[2] Ver todos los personajes guardados\n";
        cout << "[3] Salir\n";
        cout << "Seleccione una opcion: ";

        if (!(cin >> opcion)) {
            cout << "Entrada no valida.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (opcion) {
            case 1:
                registrarPersonaje();
                break;

            case 2:
                verPersonajes();
                break;

            case 3:
                cout << "Programa finalizado.\n";
                break;

            default:
                cout << "Opcion no valida.\n";
        }

    } while (opcion != 3);

    return 0;
}

